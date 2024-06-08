#include<stdio.h>
int main(){
	int arr[]={8,9,21,10,20,19,11,12,18,1,2,3,4};
	int n=sizeof(arr)/sizeof(arr[0]);
	int a,b;
	for(int i=1;i<n;i++){
		a=arr[i];
		b=i-1;
		while(arr[b]>a){
			arr[b+1]=arr[b];
			b=b-1;
		}
		arr[b+1]=a;
		
	}
	for(int i=0;i<n;i++){
	printf("%d",arr[i]);
	}
	return 0;
}