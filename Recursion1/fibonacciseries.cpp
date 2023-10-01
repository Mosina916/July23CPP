#include<iostream>
using namespace std;
int fibo(int n){
	// base case
	if(n==0){
		return 0;
	}
	if(n==1){
		return 1;
	}
	// rec case 
	return fibo(n-1)+fibo(n-2);
}
int main(){
	int pos;
	cin>>pos;//5

	cout<<fibo(pos)<<endl;
	
	return 0;
}