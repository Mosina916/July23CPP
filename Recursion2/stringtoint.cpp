#include<iostream>
using namespace std;
int stringtoint(string s,int l){ //"5642" 0
	// base case
	// ""
	if(l==0){
		return 0;
	}
	// rec case s="5642";
	int x=s[l-1]-'0';//-->'6'-'0'-->2 4 6 5
	return stringtoint(s,l-1)*10+x;//"564"-->564*10+2


}

int main(){
	// s="5647";

	string s;

	getline(cin,s);//"5642"
	int l=s.length();//4

	cout<<stringtoint(s,l)<<endl;
	return 0;
}