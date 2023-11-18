#include<iostream>
#include<vector>
using namespace std;
class node{
public:
	int data;
	node*next;
	node(int d){
		data=d;
		next=NULL;
	}
};

class stack{
	node*head;
	int l;
public:
	stack(){
		head=NULL;
		l=0;
	}


	// push
	void push(int d){
		node*n=new node(d);
		n->next=head;
		head=n;
		l++;
	
	
	}

	// pop
	void popp(){
		if(head==NULL){
			return;
		}
		else{
			node*temp=head;
			head=head->next;
			delete temp;
			temp=NULL;
			l--;

		}


	}

	// top
	 int top(){

		return head->data;

	}

	// size
	int size(){
		return l;

	}

	// empty
	bool empty(){
		return l==0;

	}

};

int main(){
	
	stack s;
	// stack<int>s;
	s.push(3);
	s.push(5);
	s.push(1);
	s.push(7);
	s.push(13);
	s.popp();


	// cout<<s.v[2]<<endl;

	cout<<s.size()<<endl;

	// while(s.empty()!=true)
	while(!s.empty()){
		cout<<s.top()<<" ";//13
	s.popp();


	}


	

	

	return 0;
}