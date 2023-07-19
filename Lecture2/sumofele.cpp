#include<iostream>
using namespace std;
int sum1(int arr[],int n){
	// base case
	if(n==0){
		return 0;

	}
	// rec case
	// return isarraysorted1(arr+1,n-1) and arr[0]<=arr[1];
	return  arr[0]+sum1(arr+1,n-1);

}
int sum2(int arr[],int n){ //4
// base case
	if(n==0){
		return 0;
	}
	// return n==1;


	// rec case
	// return isarraysorted2(arr,n-1) and arr[n-2]<=arr[n-1];
	 return arr[n-1] + sum2(arr,n-1);

}
int sum3(int arr[],int n,int i){
	// base case
	if(i==n){
		return 0;
	}


	// rec case
	return arr[i] + sum3(arr,n,i+1);

}
int main(){
	int arr[]={4,5,6,3};
	int n=sizeof(arr)/sizeof(int);
	cout<<sum1(arr,n)<<endl;
	cout<<sum2(arr,n)<<endl;
	cout<<sum3(arr,n,0)<<endl;

	return 0;
}