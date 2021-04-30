#include<stdio.h>
#define N 6
void swap(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}
int bubblesort(int arr[],int n){
	int i=0;
	if (n==1){
		return 0;
	}
	else{
	while(i<n-1){
		if(arr[i]>arr[i+1]){
			swap(&arr[i],&arr[i+1]);
		}
		i++;
	}
	bubblesort(arr,n-1);
}
	
}
int main(){
	int arr[N]={1,2,3,4,5,6};
	int n=N;
	bubblesort(arr,n);
	int i=0;
	while(i<N){
		printf("%d ",arr[i]);
		i++;
	}
}
