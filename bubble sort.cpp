#include<stdio.h>
int main(){
	int arr[]={63,56,24,32,2,1,36,15,89,1,4,56,892};
	int n=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				int t=arr[j];
				    arr[j]=arr[j+1];
				    arr[j+1]=t;
				
			}
		}
	}
	for(int i=0;i<n;i++){
		printf("%d,",arr[i]);
	}
	return 0;
}