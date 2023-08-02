#include<iostream>
using namespace std;
int main(){

	int no;
	cin>>no;// 9
	int i=2;
	while(i<=no-1){

	if(no%i==0){
		cout<<"not prime"<<endl;
		return 0;

	}
	// i++;////3

	}

	for(int i=2;i<=no-1;i++){
		if(no%i==0){
		cout<<"not prime"<<endl;
		return 0;

	}

	}

	// if(i==no){
		cout<<"prime no"<<endl;
	// }

	return 0;
}