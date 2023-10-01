#include<iostream>
using namespace std;
int multprec(int a,int b){
	// base case
	if(b==0){
		return 0;
	}
	// rec case
	return multprec(a,b-1)+a;

	
}
int main(){
	int a,b;
	cin>>a>>b;//2 4-->8

	cout<<multprec(a,b)<<endl;

	
	return 0;
}