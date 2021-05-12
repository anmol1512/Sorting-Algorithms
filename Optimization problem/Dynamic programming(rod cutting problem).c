#include<stdio.h>
#define N 8

int main(){
	int len[N]={0,1,2,3,4,5,6,7};
	int price[N]={0,1,5,8,9,10,17,18};
	int R[N]={0};
	for(int i=1;i<=N;i++){
		if(i==1){
			R[i]=1;
		}
		else{
			for(int k=1;k<=i;k++){
				if(price[k]+R[i-k]>R[i]){
				R[i]=price[k]+R[i-k];
			}
			}
		}
	}
	for(int i=0;i<N;i++){
		printf("%d ",R[i]);
	
}}
