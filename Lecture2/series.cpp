#include<iostream>
using namespace std;
int main(){
	int a,d;
	cin>>a>>d;
	// loop
	int i=1;//initilization
	while(i<=500){//condition
		cout<<a+i*d<<endl;
		i=i+1;//updation
	}


	return 0;
}