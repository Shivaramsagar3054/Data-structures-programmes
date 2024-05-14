#include<stdio.h>
#include<stdlib.h>
#define  size 10
 int arr[size],top=-1;
void push(){
	int value;
	printf("Enter the value: ");
	scanf("%d",&value);
	if(top==size-1){
		printf("\nStack is full insertion is not possible\n");
	}
	else{
		top++;
		arr[top]=value;
		printf("\nvalue inserted sucessfully\n");
	}
	
}
void pop(){
	if(top==-1){
		printf("\nStack is empty deletion is not possible\n");
	}
	else{
		printf("\n %d value deleted sucessfully\n",arr[top]);
		top--;
	}
}
void display(){
	if(top==-1){
		printf("\nStack is empty \n");
	}
	else{
		printf("\nList: ");
		for(int i=top;i>=0;i--){
			printf("%d,",arr[i]);
		}
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