#include<stdio.h>
#define N 6

void insertionsort(int a[],int l,int h){
	for(int j=1;j<N;j++){
	int key=a[j];
	int i=j-1;
	while(key<a[i] && i>=0){
		a[i+1]=a[i];
		i--;
	}
	a[i+1]=key;
}
}


int main(){
	int a[N]={4,6,3,5,1,2};
	insertionsort(a,0,N-1);
	for(int i=0;i<N;i++){
		printf("%d ",a[i]);
	}
}

