#include<stdio.h>
int main(){
	int n,t1=0,t2=1,next;
	printf("Enter the no of terms: ");
	scanf("%d",&n);
	printf("Fibinoacci series : %d,%d",t1,t2);
	for(int i=0;i<n-2;i++){
		next=t1+t2;
		printf(",%d",next);
		t1=t2;
		t2=next;
	}
	return 0;
}