#include<stdio.h>
#include<stdlib.h>
int pivotOf(int arr[],int low,int high){
	int pivot=arr[low];
	int i=low+1;
	int j=high;
	while(i<=j){
		while(i<=high && arr[i]<=pivot){
			i++;
		}
		while(arr[j]>pivot){
			j--;
		}
		if(i<j){
			int temp=arr[i];
			    arr[i]=arr[j];
			    arr[j]=temp;
		}
	}
	int t=arr[low];
	    arr[low]=arr[j];
	    arr[j]=t;
	    return j;
}
void quickSort(int arr[],int low,int high){
	if(low<high){
		int element=pivotOf(arr,low,high);
		quickSort(arr,low,element-1);
		quickSort(arr,element+1,high);
	}
	
}
int main(){
	int arr[]={63,56,24,32,2,1,36,15,89,1,4,56,892};
	int n=sizeof(arr)/sizeof(arr[0]);
	quickSort(arr,0,n-1);
	for(int i=0;i<n;i++){
		printf("%d,",arr[i]);
	}
	
	return 0;
}
