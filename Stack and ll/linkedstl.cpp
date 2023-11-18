#include<iostream>
#include<list>
using namespace std;

int main(){
	// list<datatype> nameofll;
	list<int>l;
	l.push_back(1);
	l.push_back(2);
	l.push_back(3);
	l.push_back(4);
	l.push_back(5);
	// 1 2 3 4 5

	// for(int x:l){
	// 	cout<<x<<"--> ";
	// }


	for(auto x:l){
		cout<<x<<"--> ";
	}

	cout<<endl;


	return 0;
}