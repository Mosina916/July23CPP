#include<iostream>
using namespace std;
int main(){
	int a=90,b=70,c=0,d=-1;
	// arthematic op 
	if(a++ and b-- and c++ and d--){
		cout<<"hello"<<endl;
	}
	else if(++a and --b and --c and ++d){
		cout<<"world"<<endl;
	}
	else if(d++ and --a and ++b){
		cout<<"coding"<<endl;

	}
	else{
		cout<<"blocks"<<endl;
	}
	cout<<a<<endl; 
	cout<<b<<endl;
	cout<<c<<endl;
	cout<<d<<endl;


	
	
	return 0;
}