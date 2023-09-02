#include<iostream>
using namespace std;
void f(int*ptr){//int*ptr=&x

	*ptr=*ptr+30;
	cout<<*ptr<<endl;

}
int main(){
	int x=10;
	f(&x);

	cout<<x<<endl;
	

	return 0;
}