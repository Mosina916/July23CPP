#include<iostream>
using namespace std;
int main(){

	// if else -->terniary op

	int age;
	cin>>age;//19
	if(age>=10){
		if(age==15){
			cout<<"i will gift you a toy"<<endl;

		}
		else{
			cout<<"hello"<<endl;
		}
		
	}
	
	else{
		if(age==8){
			cout<<"coding"<<endl;
		}
		else{
			cout<<"i will not gift you anything"<<endl;

		}
		
		
	
	}
	int age;
	cin>>age;
	age>=10?(age==15?cout<<"i will gift you a toy"<<endl:cout<<"hello"<<endl):(cout<<"i will not gift you anything"<<endl);

	// condition?stat1:stat2;
	// int age;
	// cin>>age;
	// age==10?cout<<"i will gift you a toy"<<endl:cout<<"i will not gift you anything"<<endl;





	return 0;
}