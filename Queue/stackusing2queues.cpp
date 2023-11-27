#include<iostream>
#include<queue>
using namespace std;

class stack{
	queue<int> q1;
	queue<int> q2;
public:
	// push

	void push(int d){
		if(q1.empty() and q2.empty()){
			q1.push(d);

		}

		else if(!q1.empty() and q2.empty()){
			q1.push(d);

		}
		else{
			q2.push(d);

		}

	}


	// pop
	void pop(){
		if(q1.empty() and q2.empty()){
			return;
		}
		else if(!q1.empty() and q2.empty()){
			while(q1.size()>1){
				q2.push(q1.front());
				q1.pop();
			}
			q1.pop();

		}
		else{
			while(q2.size()>1){
				q1.push(q2.front());
				q2.pop();
			}
			q2.pop();

		}



	}


	// top
	int top(){
		int x=INT_MAX;
		if(q1.empty() and q2.empty()){
		
		}
		else if(!q1.empty() and q2.empty()){
			while(q1.size()>1){
				q2.push(q1.front());
				q1.pop();
			}
			x=q1.front();//5
			q2.push(x);
			q1.pop();
			

		}
		else{
			while(q2.size()>1){
				q1.push(q2.front());
				q2.pop();
			}
			x=q2.front();//5
			q1.push(x);
			q2.pop();
			

		}

		return x; 



	}


	// size

	int size(){

		return q1.size()+q2.size();
	}

	// empty
	bool empty(){
		return (q1.size()+q2.size())==0;
	}

};
int main(){

	stack s;
	s.push(3);
	s.push(13);
	s.push(33);
	s.push(32);

	s.pop();
	s.push(21);
	s.push(5);
	s.pop();

	cout<<s.top()<<endl;

	while(!s.empty()){
		cout<<s.top()<<" ";

		s.pop();
	}

	cout<<endl;








	

	return 0;
}