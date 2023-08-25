#include<iostream>
using namespace std;
int main(){
	// int arr[5]={3,4,5,6,7};
	// int arr[]={3,4,5,6,7};
	// int arr[]={3,4};
	// int arr[5]={3,4};
	// int arr[5]={0};
	// int arr[5]={};
	// int tb=sizeof(arr)/sizeof(int);


	// int arr[5];
	int arr[100];
	int ts;
	cin>>ts;//10
	for(int i=0;i<=ts-1;i++){
		cin>>arr[i];
	}


	for(int i=0;i<=ts-1;i++){
		cout<<arr[i]<<" ";
	}

	cout<<endl;



	return 0;
}