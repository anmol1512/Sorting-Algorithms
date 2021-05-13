#include<stdio.h>
#define N 5
int maxpro_in(int *a){
	int in;
	int max=0;
	for (int i=0;i<N;i++){
		if(a[i]>max && a[i]!=-1){
			max=a[i];
			in=i;	
		}	
	}
	return in;
}

int main(){
	int profit[N]={5,30,10,11,2};
	int deadline[N]={3,2,1,2,3};
	int time[3]={0};
	int times=1;
	int sol=0;
	while(times<=3){
		int i=maxpro_in(profit);
		for(int j=deadline[i]-1;j>=0;j--){
			if(time[j]==0){
				time[j]=profit[i];
				sol+=profit[i];
				times+=1;
				break;
			}
		}
		profit[i]=-1;
		}
	printf("%d",sol);
	}

