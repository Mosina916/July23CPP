#include<iostream>
#include<vector>
using namespace std;
// class vector{


// 	// member functions

// 	void push_back(){

// 	}
// 	void size(){

// 	}
// 	void pop_back(){

// 	}
// };
int main(){
	vector<int> v;
	v.push_back(5);
	v.push_back(9);
	v.push_back(6);
	v.push_back(3);
	v.push_back(2);

	// cout<<v.size()<<endl;
	// cout<<v.capacity()<<endl;


	// v.pop_back();

	// cout<<v.size()<<endl;
	// cout<<v.capacity()<<endl;
	 v.erase(v.begin());

	 cout<<v.front()<<endl;

	// cout<<v.at(4)<<endl;

	 // char ch='A';
	 // int a=80;
	 // float f=56.45;
	//   auto ch='A';
	// auto a=80;
	//  auto f=56.45;









	

	return 0;
}