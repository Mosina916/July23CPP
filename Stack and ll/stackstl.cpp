#include<iostream>
#include<stack>
using namespace std;
int main(){
	stack<int>s;
	s.push(3);
	s.push(5);
	s.push(1);
	s.push(7);
	s.push(13);
	s.pop();


	// cout<<s.v[2]<<endl;

	cout<<s.size()<<endl;

	// while(s.empty()!=true)
	while(!s.empty()){
		cout<<s.top()<<" ";//13
	s.pop();


	}


	

	

	return 0;
}