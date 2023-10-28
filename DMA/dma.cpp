#include<iostream>
using namespace std;

int main(){
	//sma
	// int a;
	// a=10;\

	// dma
	int *ptr=new int;
	*ptr=10;
	cout<<*ptr<<endl;


	// delete pointername;
	delete ptr;
	ptr=NULL;




	
	
	return 0;
}