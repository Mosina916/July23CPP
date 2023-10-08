#include<iostream>
using namespace std;
void bubblesort(int*arr,int n,int step){
	// base case
	if(step==n){
		return;

	}
	// rec case
	for(int i=0;i<n-step;i++){
	 		if(arr[i]>arr[i+1]){
	 			swap(arr[i],arr[i+1]);
	 			
	 		}
	 	}
	 	// 1  2 3 4 5
	 	bubblesort(arr,n,step+1);
}
int main(){
	int arr[]={5,4,3,2,1};
	int n=sizeof(arr)/sizeof(int);
	bubblesort(arr,n,1);
	for (int i = 0; i <n; ++i)
	{
		cout<<arr[i]<<" ";
	}

	
	return 0;
}