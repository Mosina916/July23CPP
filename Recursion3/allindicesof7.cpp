#include<iostream>
using namespace std;
void allindices(int*arr,int n,int i){
	// base case
	if(i==n){
		return;
	}

	// rec case
	if(arr[i]==7){
		cout<<i<<" ";//0
	}

	allindices(arr,n,i+1);

}
int main(){
	int arr[]={7,2,7,4,7,6,7,9};
	int n=sizeof(arr)/sizeof(int);
	allindices(arr,n,0);
	return 0;
}