#include<iostream>
using namespace std;
int fact(int n){
	// base case stopping condition
	if(n==0){
		return 1;
	}
	// rec case
	return n*fact(n-1);
}
int main(){
	int n;
	cin>>n;
	cout<<fact(n)<<endl;


	return 0;
}