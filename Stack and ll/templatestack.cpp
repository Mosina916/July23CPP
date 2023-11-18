#include<iostream>
#include<vector>
using namespace std;
template<typename T>

class stack{
	vector<T> v;
public:
	
	// push
	void push(T d){
		v.push_back(d);
	}

	// pop
	void pop(){
		v.pop_back();
	}

	// top

	T top(){
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
	// int y;
	// int y;
	// stack s;
	stack<char>s;
	// stack<int>s;
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