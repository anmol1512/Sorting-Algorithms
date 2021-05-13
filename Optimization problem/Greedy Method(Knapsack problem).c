#include<stdio.h>
#define N 6
int main(){
	float price[N]={12,10,33,5,20,7};
	float weight[N]={3,4,3,1,2,7};
	float sol[N]={0};
	float p_w[N];
	float w=10.0;
	for(int i =0;i<N;i++){
		p_w[i]=price[i]/weight[i];
	}
	/*for(int i =0;i<N;i++){
		printf("%d ",p_w[i]);
	}*/
	int in,max;
	while(w>0){
		max=0;
		for(int i=0;i<N;i++){
			if(p_w[i]>max && p_w[i]!=-1){
				max=p_w[i];
				in=i;
			}
		}
		p_w[in]=-1;
		w-=weight[in];
		if(w>=0){
			sol[in]=1.0;
		}
		else{
			w+=weight[in];
			sol[in]=w/weight[in];
			w=0;
		}
	}
	float x=0;
	for(int i=0;i<N;i++){
		x+=(price[i]*sol[i]);
	}
	printf("%.3f",x);
	
}
