#include<iostream>
using namespace std;

int sumofarr3(int *arr,int n,int i){
	// base case
	if(i==n){
		return 0;
	}
	// rec case

	return arr[i]+sumofarr3(arr,n,i+1);
}
int main(){
	

	int arr[]={3,1,6,10};
	int n=sizeof(arr)/sizeof(int);
	cout<<sumofarr3(arr,n,0)<<endl;
	return 0;
}