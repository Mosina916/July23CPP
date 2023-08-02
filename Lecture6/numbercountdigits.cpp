#include<iostream>
using namespace std;
int main(){
	int co=0;
	int no;
	cin>>no;//354

	// while(no>0){//condition
		// no=no/10;//updation
	// co++;//3


	// }

	
	for(;no>0;no=no/10){
		co++;  

	}

	cout<<co<<endl;


	// for(int i=1;i<=5;i++){
	// 	cout<<"hello"<<endl;
	// }
	


	
	

	return 0;
}