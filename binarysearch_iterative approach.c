#include<stdio.h>
#define N 5
#include<math.h>
int main(){
	int a[N]={11,22,33,44,55};
	int l=0;
	int h=N-1;
	int mid;
	int key;
	scanf("%d",&key);
	
	while(l<=h){
		mid=floor((l+h)/2);
		if(a[mid]==key){
			printf("the number you are searching is on position %d",mid+1);
			break;
		}
		else{
		if(key>a[mid]){
			l=mid+1;
		}
		else if(key<a[mid]){
			h=mid-1;
		}
	}
	}
	
	if(l>h){
		printf("the number is not found");
	}
	
}
