#include<stdio.h>
int main(){
	int arr[]={56,23,1,23,8,69,15,24,789,1054};
	int n=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]>arr[j]){
				int temp=arr[i];
				     arr[i]=arr[j];
				     arr[j]=temp;
			}
		}
	}
	for(int i=0;i<n;i++){
		printf("%d,",arr[i]);
	}
	return 0;
}