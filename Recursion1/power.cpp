#include<iostream>
using namespace std;
int power(int a,int b){//3 0
	// base case
	if(b==0){
		return 1;
	}
	
	// rec case
	return power(a,b-1)*a;

	
}
int main(){
	int a,b;
	cin>>a>>b;//3 5-->3*3*3*3*3

	cout<<power(a,b)<<endl;

	
	return 0;
}