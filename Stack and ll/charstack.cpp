#include<iostream>
#include<vector>
using namespace std;

class stack{
	vector<char> v;
public:
	
	// push
	void push(char d){
		v.push_back(d);
	}

	// pop
	void pop(){
		v.pop_back();
	}

	// top

	char top(){
		return v[v.size()-1];
	}

	// size
	int size(){
		return v.size();

	}
	// empty

	bool empty(){
		// if(v.size()==0){
		// 	return true;
		// }

		// return false;

		return v.size()==0;
	}
};
int main(){
	stack s;
	s.push('A');
	s.push('A');
	s.push('F');
	s.push('S');
	s.push('A');

	// cout<<s.v[2]<<endl;

	cout<<s.size()<<endl;

	// while(s.empty()!=true)
	while(!s.empty()){
		cout<<s.top()<<" ";//13
	s.pop();


	}


	

	

	return 0;
}