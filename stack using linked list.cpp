#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
};
struct node* top=NULL;
 void push(){
 	int value;
	printf("Enter the value: ");
	scanf("%d",&value);
	struct node *newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=value;
	newnode->next=NULL;
	if(top==NULL){
		top=newnode;
	}
	else{
		newnode->next=top;
		top=newnode;
	}
 }
 void pop(){
 	if(top==NULL){
 		printf("\nstack is Empty\n");
 		
	 }
	 else{
	 	struct node *temp=top;
	 	printf("\n%d Element deleted is succesfully\n",temp->data);
	 	top=temp->next;
	 	free(temp);
	 }
 }
 void display(){
 	if(top==NULL){
 		printf("\nstack is Empty\n");
	 }
	 else{
 	struct node *temp=top;
 	while(temp!=NULL){
 		printf("%d-->",temp->data);
 		temp=temp->next;
	 }
	 printf("NULL");
	 }
 	
 }
int main(){
	while(1){
		int option;
		printf("\nEnter the option\n1.push\n2.pop\n3.display\n4.exit\n");
		scanf("%d",&option);
		switch(option){
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
			case 4:exit(0);
			default:
				printf("You entered wrong option");
			
		}
	}
	return 0;
}