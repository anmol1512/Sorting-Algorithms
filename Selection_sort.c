#include<stdio.h>
#define N 6
void swap(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}

void selectionsort(int *a,int l ,int h){
 	for(int i=0;i<N-1;i++){
 		int min=a[i];
 		int min_indx=0;
 		for(int j=i+1;j<N;j++){
 			if(a[j]<min){
 				min=a[j];
 				min_indx=j;
			 }
		}
		swap(&a[i],&a[min_indx]);
	 }
 }
 
int main(){
 	int a[N]={3,1,5,6,4,2};
 	selectionsort(a,0,N-1);
 	for(int i=0;i<N;i++){
 		printf("%d ",a[i]);
	 }
 }

