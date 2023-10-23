#include<iostream> 
#include<cmath>
using namespace std;
// ""
string moveallxatend(string s,int l){
	// base case
	if(l==0){
		return "";

	}


	// rec case
	// 
	char ch=s[0];//'x'
	string s1=moveallxatend(s.substr(1),l-1);//bxxbxpp-->bbppxxx
	if(ch=='x'){
		return s1+ch;//bbppxxxx
	}
	else{
		return ch+s1;
	}


}

int main(){
	// // dxvxbxxbxpp-->dvbbppxxxxx

	// // xbxxbxpp-->bbppxxxx

	// x bxxbxpp-->bbppxxxx

	// d xvxbxxbxpp-->dvbbppxxxxx

	string s;
	getline(cin,s);
	// xbxxbxpp
	cout<<moveallxatend(s,s.length())<<endl;
	
	

	return 0;
}