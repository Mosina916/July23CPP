#include<iostream>
using namespace std;
int main(){
	char ch;
	
	while(-100){
		cin>>ch;
		if(ch=='+'){
		int n1,n2;
		cin>>n1>>n2;
		cout<<n1+n2<<endl;

	}
	else if(ch=='-'){
		int n1,n2;
		cin>>n1>>n2;
		cout<<n1-n2<<endl;

	}
	else if(ch=='*'){
		int n1,n2;
		cin>>n1>>n2;
		cout<<n1*n2<<endl;

	}
	else if(ch=='/'){
		int n1,n2;
		cin>>n1>>n2;
		cout<<n1/n2<<endl;

	}
	else if(ch=='%'){
		int n1,n2;
		cin>>n1>>n2;
		cout<<n1%n2<<endl;

	}
	else if(ch=='X'|| ch=='x'){
		// break;
		return 0;

	}
	else{
		cout<<"Invalid operation. Try again."<<endl;
	}


	}

	




	return 0;
}