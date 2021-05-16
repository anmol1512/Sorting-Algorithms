#include<stdio.h>
#define N 8
int fib(int n,int *a){
	if(n==0 ||n==1){
		a[n]=1;
		return 1;
	}
	if(a[n]!=0){
		return a[n];
	}
	else{
		a[n]=fib(n-1,a)+fib(n-2,a);
		return a[n];
	}

}
int main(){
	int x;
	int a[N]={0};
	x=fib(N-1,a);
	for(int i=0;i<N;i++){
		printf("%d ",a[i]);
	}
}
