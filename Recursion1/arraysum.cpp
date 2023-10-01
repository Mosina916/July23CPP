#include<iostream>
using namespace std;
int sumofarraele(int arr[],int n){
	// base case
	if(n==0){
		return 0;
	}


	// rec case
	return sumofarraele(arr+1,n-1)+arr[0];
}

int main(){
	int arr[]={3,4,5,1,2};
	int n=sizeof(arr)/sizeof(int);
	cout<<sumofarraele(arr,n)<<endl;


	
	return 0;
}