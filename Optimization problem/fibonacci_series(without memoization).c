#include<stdio.h>
#define N 8
int fib(int n){
	if(n==0 ||n==1){
		return 1;
	}
	else{
		return fib(n-1)+fib(n-2);
	}

}
int main(){
	int x;
	for(int i=0;i<N;i++){
		x=fib(i);
		printf("%d ",x);
	}
}
