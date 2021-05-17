#include<stdio.h>
#define N 8
int main(){
	int stages=4;
	int cost[N];
	int d[N];
	int path[stages];
	int graph[N][N]={
	{0,1,2,5,0,0,0,0},
	{0,0,0,0,4,11,0,0},
	{0,0,0,0,9,5,16,0},
	{0,0,0,0,0,0,2,0},
	{0,0,0,0,0,0,0,18},
	{0,0,0,0,0,0,0,13},
	{0,0,0,0,0,0,0,2},
	{0,0,0,0,0,0,0,0}
};
cost[N-1]=0;
d[N-1]=-1;
int min;
for (int i=N-2;i>=0;i--){
	min =999;
	for (int k=i+1;k<N;k++){
		if(graph[i][k]!=0 && (graph[i][k]+cost[k])<min){
			min=graph[i][k]+cost[k];
			d[i]=k;
		}
	}
	cost[i]=min;	
}
path[0]=0;path[stages-1]=7;
for(int i=1;i<stages-1;i++){
	path[i]=d[path[i-1]];
}
printf("The sortest path from source to destination of the given multistage graph is; ");
for(int i=0;i<stages;i++){
	printf("%d ",path[i]);
}
printf("\nwith the minimum cost as: %d",cost[0]);

}
