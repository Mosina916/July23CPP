#include<iostream>
using namespace std;
int ds(int n){
	// base case
	if(n==0){
		return 0;
	}
	// rec case
	return n%10+ds(n/10);
}
int main(){
	int n;
	cin>>n;
	cout<<ds(n)<<endl;
	return 0;
}