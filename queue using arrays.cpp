#include<stdio.h>
#include<stdlib.h>
#define  size 10
int Queue[size],front=-1,rear=-1;
void enqueue(){
	int value;
	printf("Enter the value: ");
	scanf("%d",&value);
	if(rear==size-1){
		printf("\nQueue is fulled ! insertion is not possible\n");
	}
	else{
		if(front==-1){
			front=0;
		}
		rear++;
		Queue[rear]=value;
	}
	printf("\nValue inserted successfully\n");
}
void dequeue(){
	if(rear==-1 ||front==rear+1) {
		printf("\n\nQueue is Empty!!\n");
	}else{
		printf("\n%d element deleted successfully",Queue[front]);
		front++;
		
	}
}
void display(){
	if(rear==-1 ||front==rear+1){
		printf("\n\nQueue is Empty");
	}else{
		printf("\nQueue Elements: ");
		for(int i=front;i<=rear;i++){
			printf("%d,",Queue[i]);
		}
	}
}
int main(){
	while(1){
		int option;
		printf("\nchoose the option\n1.enQueue\n2.deQueue\n3.display\n4.exit\n Enter the option:");
		scanf("%d",&option);
		switch(option){
			case 1:
				enqueue();
				break;
			case 2:
				dequeue();
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