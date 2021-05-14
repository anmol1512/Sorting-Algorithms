#include<stdio.h>
#define N 6
int maxheap(int *arr,int i){
	int p=(i-1)/2;
	if(i==0 || arr[p]>arr[i]){
		return 0;
	}
	else{
		int temp=arr[i];
		arr[i]=arr[p];
		arr[p]=temp;
	}
	maxheap(arr,p);
}
int main(){
	int a[N]={22,3,5,66,1,10};
	int b[N]={0};
	for(int i=0;i<N;i++){
		b[i]=a[i];
		maxheap(b,i);
	}
	for(int i=0;i<N;i++){
	printf("%d ",b[i]);
	}
}
