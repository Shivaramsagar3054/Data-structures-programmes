#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *left;
	struct node *right;
};
struct node *newnode(int data){
	struct node *temp=(struct node*)malloc(sizeof(struct node));
	temp->data=data;
	temp->left=NULL;
	temp->right=NULL;
	return temp;
}
struct node *insert(struct node *my_node,int data){
	if(my_node==NULL){
		return newnode(data);
	}
	else{
	
		if(data<my_node->data){
			my_node->left=insert(my_node->left,data);
		}else{
			my_node->right=insert(my_node->right,data);
		}
		return my_node;	
	}

}
void preorder(struct node *my_node){
	if(my_node!=NULL){
	printf("%d-->",my_node->data);
	preorder(my_node->left);
	preorder(my_node->right);	
	}
	
}
void inorder(struct node *my_node){
	if(my_node!=NULL){
	inorder(my_node->left);
	printf("%d-->",my_node->data);
	inorder(my_node->right);	
	}
}
void postorder(struct node *my_node){
	if(my_node!=NULL){
		postorder(my_node->left);
		postorder(my_node->right);
		printf("%d-->",my_node->data);
	}
}
int findMax(struct node *my_node){
	if(my_node->right==NULL)
	return my_node->data;
	return findMax(my_node->right);
}
int findMin(struct node *my_node){
	if(my_node->left==NULL){
		return my_node->data;
	}
	return findMin(my_node->left);
}
int search(struct node *my_node,int value){
	if(my_node==NULL){
		return 0;
	}else{
		if(my_node->data==value){
			return 1;
		}else if(value<my_node->data){
			return  search(my_node->left,value);
	}else{
		return search(my_node->right,value);
	}
	
}
}
struct node *remove(struct node *my_node,int value){
	if(my_node==NULL){
		return NULL;
	}else{
		if(my_node->data==value){
			if(my_node->left==NULL && my_node->right==NULL){
				my_node=NULL;
			}else if(my_node->left==NULL){
				my_node=my_node->right;
			}else if(my_node->right==NULL){
				my_node=my_node->left;
			}else{
				int max=findMax(my_node->left);
				my_node->data=max;
				my_node->left=remove(my_node->left,max);
			}
			
		}else if(value<my_node->data){
			my_node->left=remove(my_node->left,value);
		}else{
			my_node->right=remove(my_node->right,value);
		}
		return my_node;
		
	}
}



int main(){
	
	struct node *root=NULL;
	root=insert(root,89);
	root=insert(root,56);
	root=insert(root,101);
	root=insert(root,78);
	root=insert(root,196);
	root=insert(root,1036);
	root=insert(root,2);
	printf("Preorder\n");
	preorder(root);	
	printf("NULL");
	printf("\ninorder\n");
	inorder(root);
	printf("NULL");
	printf("\nPostorder\n");
	postorder(root);
	printf("NULL\n");
	printf("Maximum node in TREE is :%d \n",findMax(root));
	printf("Minimum node in TREE is :%d \n",findMin(root));
	int value=89;
	if(search(root,value)){
		printf("%d value is present in tree\n",value);
	}else{
		printf("%d value is not present in tree\n",value);
	}
	remove(root,value);
	inorder(root);
}
