#include<stdio.h>
int main(){
	int arr[]={8,9,21,10,20,19,11,12,18,1,2,3,4};
	int n=sizeof(arr)/sizeof(arr[0]);
	for(int i=1;i<n;i++){
		int t=arr[i];
		int j;
		for(j=i-1;(j>=0 && t<arr[j]);j--){
			arr[j+1]=arr[j];
		}
		arr[j+1]=t;
	
	}
	for(int i=0;i<n;i++){
	printf("%d,",arr[i]);
	}
	return 0;
}
