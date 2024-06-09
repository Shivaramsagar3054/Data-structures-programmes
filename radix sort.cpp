#include<stdio.h>
int getMax(int arr[],int n){
	int m=arr[0];
	for(int i=0;i<n;i++){
		if(m<arr[i]){
			m=arr[i];
		}
	}
	return m;
}
void countSort(int arr[],int n,int pos)
{
	int count[10]={0};
	int b[n];
	for(int i=0;i<n;i++){
		count[(arr[i]/pos)%10]++;
	}
	for(int i=1;i<10;i++){
		count[i]+=count[i-1];
	}
	for(int i=n-1;i>=0;i--){
		b[--count[(arr[i]/pos)%10]]=arr[i];
		
	}
	for(int i=0;i<n;i++){
		arr[i]=b[i];
	}
}
void radixSort(int arr[],int n){
	int max=getMax(arr,n);
	for(int pos=1;max/pos>0;pos*=10){
		countSort(arr,n,pos);
	}
}
int main()
{
	int arr[]={56,89,54,100,156,899,1056,7,9,1,2,5};
	int n=sizeof(arr)/sizeof(arr[0]);
	radixSort(arr,n);
	printf("\nsorted array:");
	for(int i=0;i<n;i++){
		printf("%d,",arr[i]);
	}
	return 0;
}
