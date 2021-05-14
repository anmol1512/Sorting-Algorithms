#include<stdio.h>
#define N 6
int maxheap(int *a,int n,int i){
	int s=(2*i)+1;
	int d=s+1;
	if(s>=n && d>=n){
		return 0;
	}
	else if(s<n && d>=n){
		if (a[s]>a[i]){
		int temp=a[i];
		a[i]=a[s];
		a[s]=temp;
		maxheap(a,n,s);
	}
	else{
		return 0;
	}
}
	else{
	
	if (a[s]>a[d] && a[s]>a[i]){
		int temp=a[i];
		a[i]=a[s];
		a[s]=temp;
		maxheap(a,n,s);
	}
	else if (a[s]<a[d] && a[d]>a[i]){
		int temp=a[i];
		a[i]=a[d];
		a[d]=temp;
		maxheap(a,n,d);
	}
	else{
		return 0;
	}
}}


int deletion(int *a,int n){
	int temp=a[0];
	a[0]=a[n-1];
	a[n-1]=temp;
	maxheap(a,n-1,0);
	return temp;
}
int main(){
	int a[N]={66,22,10,3,1,5};
	int x=deletion(a,N);
	int y=deletion(a,N-1);
	int z=deletion(a,N-2);
	int w=deletion(a,N-3);
	printf("current max heap is: ");
	for (int i=0;i<N-4;i++){
		printf("%d ",a[i]);
	}
	printf("\nthe deleted item from maxheap is: %d %d %d %d",x,y,z,w);
}
