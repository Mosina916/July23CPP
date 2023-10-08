#include<iostream>
using namespace std;
int liof7(int *arr,int i){
	// base case
	if(i==-1){
		return -1;

	}
	// rec case
	if(arr[i]==7){
		return i;
	}
	return liof7(arr,i-1);

}

int liof72(int *arr,int n){
	// base case
	if(n==0){
		return -1;
	}
	// rec case
	if(arr[n-1]==7){
		return n-1;
	}
	return liof7(arr,n-1);

}

int main(){
	int arr[]={3,2,7,4,7,6,7,9};
	int n=sizeof(arr)/sizeof(int);
	int x=liof7(arr,n-1);
	if(x==-1){
		cout<<"7 is not present"<<endl;
	}
	else{
		cout<<"last index of 7 is "<<x<<endl;
	}
	x=liof72(arr,n);
	if(x==-1){
		cout<<"7 is not present"<<endl;
	}
	else{
		cout<<"last index of 7 is "<<x<<endl;
	}
	return 0;
}