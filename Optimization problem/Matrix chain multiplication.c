#include<stdio.h>
int main(){
	int n=5;
	int d[6]={4,10,3,12,20,7};
	int a[n][n];
	int temp[n][n];
	int x;
	int t;
	for(int i=0;i<n;i++){
		a[i][i]=0;
	}
	for(int i=n-2;i>=0;i--){
		for(int j=i+1;j<n;j++){
			x=100000;
			for(int k=i;k<j;k++){
				if(a[i][k]+a[k+1][j]+d[i]*d[k+1]*d[j+1]<x){
					x=a[i][k]+a[k+1][j]+d[i]*d[k+1]*d[j+1];
					t=k;
				}
			}
			a[i][j]=x;
			temp[i][j]=t;
		}
	}
	printf("The mininum cost to multiply the matrix chain A0 A1 A2 A3 A4 is %d",a[0][4]);
}
