#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int no;
	int co=0;
	cin>>no;
	while(no>0){
		if((no&1)==1){
		co++;

	}
	no=no>>1;

	}

	cout<<co<<endl;

	
	
	return 0;
}