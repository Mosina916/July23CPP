#include<iostream>
using namespace std;
void f(int&y){//

	y=y+30;
	cout<<y<<endl;

}
int main(){
	int x=10;
	f(x);

	cout<<x<<endl;
	

	return 0;
}