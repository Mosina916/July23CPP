#include<iostream>
using namespace std;
bool check7pon(int *arr,int n){
	// base case
	if(n==0){
		return false;
	}
	// rec case
	if(arr[0]==7){
		return true;
	}
	return check7pon(arr+1,n-1);
}

bool check7pon2(int *arr,int n){
	// base case
	if(n==0){
		return false;
	}

	// rec case
	if(arr[n-1]==7){
		return true;
	}
	return check7pon2(arr,n-1);
}

bool check7pon3(int *arr,int n,int i){
	// base case
	if(i==n){
		return false;
	}



	// rec case
	if(arr[i]==7){
		return true;
	}
	return check7pon3(arr,n,i+1);
}
int main(){
	int arr[]={3,2,7,4,7,6,7,9};
	int n=sizeof(arr)/sizeof(int);
	if(check7pon(arr,n)==true){
		cout<<"7 is presnt"<<endl;
	}
	else{
		cout<<"7 is not presnt"<<endl;

	}
	
	return 0;
}