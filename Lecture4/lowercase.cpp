#include<iostream>
using namespace std;
int main(){
	char ch;
	cin>>ch;//'B'
	// if(ch>='A' and ch<='Z'){
	// 	cout<<"UPPERCASE"<<endl;
	// }
	// else if(ch>='a' and ch<='z'){
	// 	cout<<"lowercase"<<endl;

	// }
	// else{
	// 	cout<<"special character"<<endl;
	// }

	// if(ch>=65 and ch<=90){
	// 	cout<<"UPPERCASE"<<endl;
	// }
	// else if(ch>=97 and ch<=122){
	// 	cout<<"lowercase"<<endl;

	// }
	// else{
	// 	cout<<"special character"<<endl;
	// }


// 'b'
	if(isupper(ch)){
		cout<<"UPPERCASE"<<endl;
	}
	else if(islower(ch)){
		cout<<"lowercase"<<endl;

	}
	else{
		cout<<"special character"<<endl;
	}

	return 0;
}