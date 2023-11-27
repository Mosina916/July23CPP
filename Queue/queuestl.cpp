#include<iostream>
#include<queue>
using namespace std;
int main(){

	queue<int> s;
	s.push(3);
	s.push(13);
	s.push(33);
	s.push(32);
	 // 33 32 21 5

	s.pop();
	s.push(21);
	s.push(5);
	s.pop();

	cout<<s.front()<<endl;

	while(!s.empty()){
		cout<<s.front()<<" ";

		s.pop();
	}

	cout<<endl;








	

	return 0;
}