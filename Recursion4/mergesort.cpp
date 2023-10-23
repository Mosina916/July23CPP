#include<iostream>
using namespace std;
void mergetwosortedarrays(int *arr,int s,int e){
	int temp[10000];
	int mid=(s+e)/2;
	int i=s,j=mid+1,k=0;
	while(i<=mid and j<=e){
		if(arr[i]<arr[j]){
			temp[k++]=arr[i++];
			// i++;
			// k++;
		}
		else{
			temp[k++]=arr[j++];

		}
	}

	while(i<=mid){
		temp[k++]=arr[i++];

	}

	while(j<=e){
		temp[k++]=arr[j++];
	}


	// copt temp array int arr
	for (int i =s; i<=e ; ++i)
	{
		arr[i]=temp[i];
	}

	
	

}
void mergesort(int *arr,int s,int e){
	// base case
	if(s>=e){
		return;
	}
	// rec case
	int mid=(s+e)/2;
	mergesort(arr,s,mid);
	mergesort(arr,mid+1,e);
	mergetwosortedarrays(arr,s,e);

}
int main(){
	int arr[]={3,5,2,6,1};
	int n=sizeof(arr)/sizeof(int);
	mergesort(arr,0,n-1);

	for (int i = 0; i <=n-1; ++i)
	{
		cout<<arr[i]<<" ";
	}

	cout<<endl;


	return 0;
}