#include<stdio.h>
#define x 999
#define N 4
int main(){
	int graph[N][N]={
	{0,3,x,7},
	{8,0,2,x},
	{5,x,0,1},
	{2,x,x,0}
	};
	for(int k=0;k<N;k++){

	for (int i=0;i<N;i++){
		if(i!=k){
		for (int j=0;j<N;j++){
			if(j!=k){
			graph[i][j]=graph[i][j]<graph[i][k]+graph[k][j]?graph[i][j]:graph[i][k]+graph[k][j];	
		}
		}
	}
	}
}
int s,d;
printf("enter the source and destination in the range(0,1,2,3):\n");
scanf("%d-%d",&s,&d);
printf("the sortest path between %d and %d is %d",s,d,graph[s][d]);
}
