#include<iostream> 
#include<cmath>
using namespace std;
// "pipi"
string replaceallpi(string s,int l){
	// base case
	if(l<=1){
		return s;

	}

	// rec case
	string s1=s.substr(0,2);//xp
	if(s1=="pi"){
		return "3.14"+replaceallpi(s.substr(2),l-2);
	}
	else{
		return s[0]+replaceallpi(s.substr(1),l-1);

	}

	
}

int main(){

	// // xpiippxpiixpipid-->x3.14ippx3.14ix3.143.14d

	

	string s;
	getline(cin,s);
	// xbxxbxpp
	cout<<replaceallpi(s,s.length())<<endl;
	
	

	return 0;
}