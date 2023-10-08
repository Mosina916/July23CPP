#include<iostream>
using namespace std;
int fiof7(int *arr,int n,int i){
	// base case
	if(i==n){
		return -1;

	}
	// rec case
	if(arr[i]==7){
		return i;
	}
	return fiof7(arr,n,i+1);

}
int main(){
	int arr[]={3,2,7,4,7,6,7,9};
	int n=sizeof(arr)/sizeof(int);
	int x=fiof7(arr,n,0);
	if(x==-1){
		cout<<"7 is not present"<<endl;
	}
	else{
		cout<<"first index of 7 is "<<x<<endl;
	}
	return 0;
}