#include<iostream>
using namespace std;
int x=89;
int main(){
	int x=90;
	if(x>=20){
		cout<<x<<endl;
		cout<<::x<<endl;
	}
	::x=::x+10;
	cout<<::x<<endl;
	cout<<x<<endl;


	return 0;
}