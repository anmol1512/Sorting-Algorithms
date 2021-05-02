#include<stdio.h>
#include<math.h>
#define N 6
int binarysearch(int l,int h,int *a,int key);
int main(){
	int a[N]={11,22,33,44,55,66};
	int x;
	scanf("%d",&x);
	int i=binarysearch(0,N-1,a,x);
	printf("the element you are searching for is on  position %d",i+1);
	return 0;
}
int binarysearch(int l,int h,int *a,int key){
    if (l<=h){
	int mid=floor((l+h)/2);
	if(key==a[mid]){
		return mid;
	}
	if(key>a[mid]){
		binarysearch(mid+1,h,a,key);
	}
	else if (key<a[mid]){
		binarysearch(l,mid-1,a,key);
	}
}
else{
	return -1;
}
}

