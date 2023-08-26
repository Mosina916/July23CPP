#include<iostream>
using namespace std;
int main(){

	// int age;
	// cin>>age;//19
	// if(age>=10){
	// 	if(age==15){
	// 		cout<<"i will gift you a toy"<<endl;

	// 	}
	// 	else{
	// 		cout<<"hello"<<endl;
	// 	}
		
	// }
	
	// else{
	// 	if(age==8){
	// 		cout<<"coding"<<endl;
	// 	}
	// 	else{
	// 		cout<<"i will not gift you anything"<<endl;

	// 	}
	
	// }
	int age;
	cin>>age;
	switch(age){
		case 10:if(age==15){
						cout<<"i will gift you a toy"<<endl;

					}
					else{
						cout<<"hello"<<endl;
					}
					break;
		default:if(age==8){
					cout<<"coding"<<endl;
				}
				else{
					cout<<"i will not gift you anything"<<endl;

				}
	}



	return 0;
}