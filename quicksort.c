#include<stdio.h>
#define N 7
void swap(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}
int quicksort(int a[],int l,int h){
	if(l<h){
		int x;
		x=partition(a,l,h);
		quicksort(a,l,x);
		quicksort(a,x+1,h);
	}
	else{
		return 0;
	}
}
int partition(int a[],int l,int h){
	int i=l,j=h;
	while(i<j){
	do{
		i++;
	}while(a[i]<a[l]);
	do{
		j--;
	}while(a[j]>a[l]);
	if(i<j){
		swap(&a[i],&a[j]);
	}
}
swap(&a[l],&a[j]);
return j;
}
int main(){
	int a[N]={8,4,2,1,7,3};
	quicksort(a,0,6);
	for(int i=0;i<N-1;i++)
	printf("%d ",a[i]);
	return 0;
}

