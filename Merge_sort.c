#include<stdio.h>
#define N 6
#include<math.h>

int *mergesort(int arr[],int l,int h,int c){
	if (l<h){
	int mid=floor((l+h)/2);
	int *a=mergesort(arr,l,mid,c);
	int *b=mergesort(arr,mid+1,h,c);
	int x=sizeof(a)/sizeof(a[0]);
	int y=sizeof(b)/sizeof(b[0]);
	merge(a,b,x,y,c);
	return &c[0];
	
}
else{
	return &arr[l];	
}

}

void merge(int a[],int b[],int x,int y,int c[]){
	int i=0,j=0,k=0;
	while(i<x && j<y){
		if(a[i]<b[j]){
		c[k]=a[i];
		i++;
		}
		else if(a[i]>b[j]){
			c[k]=b[j];
			j++;
		}
		k++;	
	}
	if(i<x){
	for(int t=i;t<x;t++){
		c[k]=a[t];
		k++;
	}
	}
	else if(j<y){
		for(int t=j;t<y;t++){
		c[k]=b[t];
		k++;
		}
	}
}


int main(){
	int arr[N]={6,2,5,3,1,4};
	int c[N];
	int *p=mergesort(arr,0,N-1,c);
	for(int i=0;i<N;i++)
	printf("%d",p[i]);
	
}
