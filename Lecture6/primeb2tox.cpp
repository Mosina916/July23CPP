#include<iostream>
using namespace std;
int main(){
	int x;
	cin>>x;

	for(int no=2;no<=x;no++){
		int i=2;
	while(i<=no-1){

	if(no%i==0){
		
		break;
		// return 0;

	}
	i++;////3

	}
	if(i==no){
		cout<<no<<endl;
	}

	}

	

	return 0;
}