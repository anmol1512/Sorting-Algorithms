#include<stdio.h>
#define n 10
#define k 10
int main(){
	int b[n];
	int a[n]={1,6,3,6,8,5,2,7,9,9};
	int r[k]={0};
	for(int i=0;i<n;i++){
		r[a[i]]++;
	}

	for(int i=1;i<k;i++){
		r[i]=r[i-1]+r[i];
	}

	for(int i=n;i>=0;i--){
		b[--r[a[i]]]=a[i];
	}
	
	for (int i=0;i<n;i++){
		a[i]=b[i];
	}

	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
