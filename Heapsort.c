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

int maxheap_del(int *a,int n,int i){
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
		maxheap_del(a,n,s);
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
		maxheap_del(a,n,s);
	}
	else if (a[s]<a[d] && a[d]>a[i]){
		int temp=a[i];
		a[i]=a[d];
		a[d]=temp;
		maxheap_del(a,n,d);
	}
	else{
		return 0;
	}
}}

int deletion(int *b,int n){
	int temp=b[0];
	b[0]=b[n-1];
	b[n-1]=temp;
	maxheap_del(b,n-1,0);
	return temp;
}

int main(){
	int a[N]={22,3,5,66,1,10};
	printf("initial array: ");
	for(int i=0;i<N;i++){
		printf("%d ",a[i]);
	}
	int b[N]={0};
	for(int i=0;i<N;i++){
		b[i]=a[i];
		maxheap(b,i);
	}
    for(int i=0;i<N;i++){
	deletion(b,N-i);
}
printf("\nSorted array: ");
	for(int i=0;i<N;i++){
		printf("%d ",b[i]);
	}	
}
