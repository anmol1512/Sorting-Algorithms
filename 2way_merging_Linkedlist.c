#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;	
};



struct node *Merging(struct node **head_a,struct node ** head_b){
	struct node *result=NULL;
	if(*head_a==NULL)
	return (*head_b);
	if(*head_b==NULL)
	return (*head_a);
	
	if((*head_a)->data<(*head_b)->data){
		result=*head_a;
		result->next=Merging(&((*head_a)->next),head_b);
	}
	else{
		result=*head_b;
		result->next=Merging(head_a,&((*head_b)->next));
	}
	return (result);
}
int main(){
	int arr[5]={1,2,6,12,18};
	int brr[6]={3,4,5,7,11,20};
	struct node *a=NULL;
    struct node *b=NULL;
	struct node *newnode=NULL;
	for(int i=4;i>=0;i--){
		newnode=(struct node*)malloc(sizeof(struct node));
		newnode->data=arr[i];
		newnode->next=a;
		a=newnode;
		newnode=NULL;
	}
		for(int i=5;i>=0;i--){
		newnode=(struct node*)malloc(sizeof(struct node));
		newnode->data=brr[i];
		newnode->next=b;
		b=newnode;
		newnode=NULL;
	}
	struct node* result=NULL;
	result=Merging(&a,&b);
	while(result){
		printf("%d ",result->data);
		result=result->next;
	}
}
