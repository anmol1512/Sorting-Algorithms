#include<stdio.h>
#define N 7
int search(int *a,int k){
	for(int i=0;i<N;i++){
		if(a[i]==k){
			return 1;
		}
	}
	return 0;
}
void adj_rule(int *a,int *b,int in){
	for(int i=0;i<N;i++){
		if(b[i]!=0){
			if(b[i]<a[i]){
				a[i]=b[i];
			}
		}
	}	
}

int main(){
	int adj[N][N]={{0,28,0,0,0,10,0},
	               {28,0,16,0,0,0,14},
	               {0,16,0,12,0,0,0},
	               {0,0,12,0,22,0,18},
				   {0,0,0,22,0,25,24},
				   {10,0,0,0,25,0,0},
				   {0,14,0,18,24,0,0}
					};
    int x=999;
    int node[N]={-1,-1,-1,-1,-1,-1,-1};
    int arr[N]={0,x,x,x,x,x,x};
    int sol=0;
    int in;
    int min;
    for(int i=0;i<N;i++){
    	min=9999;
    	for(int j=0;j<N;j++){
    		if(!(search(node,j))){
    			if(arr[j]<min){
    				min=arr[j];
    				in=j;
				}
			}	
		}
		sol+=min;
		node[i]=in;
	    adj_rule(arr,&adj[in][0],in);
	}
	printf("The total cost of the Minimum cost spanning tree is %d",sol);
}
