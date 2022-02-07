#include<stdio.h>
/*my task is to implement 2way merging(when we are merging 2 sorted array at a time)*/
int main(){
	int a[5]={33,99,103,111,333};
	int b[8]={11,24,55,89,114,223,500,501};
	int c[13];
	int i,j,k;
	i=j=k=0;
	while(i<5 && j<8){
		if(a[i]<b[j])
			c[k++]=a[i++];
		else
		    c[k++]=b[j++];
	}
	for(;i<5;i++)
		c[k++]=a[i];
	for(;j<8;j++)
	    c[k++]=b[j];
	for(k=0;k<13;k++)
	    printf("%d ",c[k]);
}


