#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *left;
	struct node *right;
};
	
	
struct node *newnode(int value){
	struct node *temp=(struct node*)malloc(sizeof(struct node*));
	temp->data=value;
	temp->left=NULL;
	temp->right=NULL;
	return temp;
}
struct node *insert(struct node *mynode,int value){
	if(mynode==NULL){
	return newnode(value);
}
else{
	if(value<mynode->data){
	   mynode->left=insert(mynode->left,value);}
	else{
	   mynode->right=insert(mynode->right,value);
}
	    return mynode;
}

}
void inorder(struct node *mynode){
	if(mynode!=NULL){
	inorder(mynode->left);
	printf("%d,",mynode->data);
	inorder(mynode->right);
}
}
void preorder(struct node *mynode){
	if(mynode!=NULL){
	printf("%d,",mynode->data);
	preorder(mynode->left);
	preorder(mynode->right);
}
}
void postorder(struct node *mynode){
	if(mynode!=NULL){
	postorder(mynode->left);
	postorder(mynode->right);
	printf("%d,",mynode->data);
}
}
int main(){
	struct node *root=NULL;
	while(1){
	printf("Choose the operation\n");
	printf("1)insertion 2)inorder 3)preorder 4)postorder\n");                                                
	int option;
	printf("Enter the operation: ");
	scanf("%d",&option);
	
	switch(option){
			case 1:
				int value;
				printf("Enter the value: ");
				scanf("%d",&value);
				root=insert(root,value);
				printf("value insetred succedssfully\n");
				break;
			case 2:
				inorder(root);
				break;
			case 3:
				preorder(root);
				break;
			case 4:
				postorder(root);
				break;
			default:
				break;
		}
	}
}