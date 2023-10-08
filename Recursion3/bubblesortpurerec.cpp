#include<iostream>
using namespace std;
void bubblesort(int*arr,int n,int step,int i){
	// base case
	if(step==n){
		return;

	}
	// rec case
	if(i==n-step){
		bubblesort(arr,n,step+1,0);
	}
	else{
		if(arr[i]>arr[i+1]){
	 			swap(arr[i],arr[i+1]);
	 			
	 		}
	 		bubblesort(arr,n,step,i+1);

	}
	// rec case
	
}
int main(){
	int arr[]={5,4,3,2,1};
	int n=sizeof(arr)/sizeof(int);
	bubblesort(arr,n,1,0);
	for (int i = 0; i <n; ++i)
	{
		cout<<arr[i]<<" ";
	}

	
	return 0;
}