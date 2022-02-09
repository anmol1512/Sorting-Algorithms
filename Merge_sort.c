#include<stdio.h>
#include<stdlib.h>
/*This the implementation of merge sort also known as 2-way merge sort with the help of recurssion as it uses DivideAndConquer Method*/

void merging(int *a,int l,int mid,int h){
	int size=(h-l)+1;
	int b[size];
	int i=l,j=mid+1,k=0;
	while(i<=mid &&j<=h){
		
		if(a[i]<a[j])
		    b[k++]=a[i++];
		else
		    b[k++]=a[j++];

	}
	for(;i<=mid;i++)
	b[k++]=a[i];
	for(;j<=h;j++)
	b[k++]=a[j];
	int in=l;
	k=0;
	for(;in<=h;in++)
	a[in]=b[k++];
}
void merge(int *a,int l,int h){
	if(l==h)
	   return;
	else{
	int mid=(l+h)/2;
	merge(a,l,mid);
	merge(a,mid+1,h);
	merging(a,l,mid,h);
}
}
int main(){
	int a[6]={1,5,3,6,2,4};
	merge(a,0,5);
	for(int i=0;i<6;i++)
	printf("%d ",a[i]);
}
