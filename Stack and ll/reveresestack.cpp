#include<iostream>
#include<stack>
using namespace std;
void insertatbottom(stack<int> &s,int ele){
	// base case
	if(s.empty()){
		s.push(ele);
		return;
	}

	// rec case
	int t=s.top();
	s.pop();
	insertatbottom(s,ele);
	s.push(t);

}

void reverse(stack<int> &s){
	// base case
	if(s.empty()){
		return;
	}

	// rec case
	int ele=s.top();
	s.pop();
	reverse(s);
	insertatbottom(s,ele);
}
void printstack(stack<int> s){
	while(!s.empty()){
		cout<<s.top()<<" ";//13
	s.pop();


	}

}
int main(){
	stack<int>s;
	s.push(3);
	s.push(5);
	s.push(1);
	s.push(7);
	s.push(13);
	

	reverse(s);
	printstack(s);


	// 	while(!s.empty()){
	// 	cout<<s.top()<<" ";//13
	// s.pop();


	// }


	return 0;
}