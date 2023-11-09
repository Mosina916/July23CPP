#include<iostream>
using namespace std;
class node{
public:
	int d;
	node*next;
	node(int data){
		d=data;
		next=NULL;

	}

};


void insertattail(node*&head,node*&tail,int data){
	node*n=new node(data);
	if(head==NULL){
		head=n;
		tail=n;
	}
	else{
		tail->next=n;
		tail=n;
	}
}




void printll(node*head){
	// node*temp=head;
	// while(temp!=NULL){
	// 	cout<<temp->d<<"-->";
	// 	temp=temp->next;
	// }

	// cout<<endl;

	while(head!=NULL){
		cout<<head->d<<"-->";
		head=head->next;
	}

	cout<<endl;
}



int lenrec(node*head){

	// base case
	if(head==NULL){
		return 0;
	}


	// rec case
	return 1+lenrec(head->next);

}


node* midpoint(node*head){
	node*slow=head;
	node*fast=head->next;

	while(fast!=NULL and fast->next!=NULL){
		slow=slow->next;
	fast=fast->next->next;
	}
	return slow;
	
}

node* mergetwosortedll(node*head1,node*head2){
	if(head1==NULL){
		return head2;
	}
	if(head2==NULL){
		return head1;
	}
	node*newhead=NULL;

	if(head1->d<head2->d){
		// node*newhead=NULL;
		newhead=head1;
		newhead->next=mergetwosortedll(head1->next,head2);

		// return newhead;

	}
	else{
		// node*newhead=NULL;
		newhead=head2;
		newhead->next=mergetwosortedll(head1,head2->next);

		// return newhead;
	}

	return newhead;
}

node*mergesort(node*head){
	if(head==NULL){
		return head;
	}


	if(head->next==NULL){
		return head;
	}



	node*m=midpoint(head);//1 ka adrees
	node*t=m->next;
	m->next=NULL;
	node*a=mergesort(head);//1 3 5
	node*b=mergesort(t);//2 6
	return mergetwosortedll(a,b);
}


int main(){
	// node*head1=NULL;
	// node*tail1=NULL;
	// int n;
	// cin>>n;
	// for (int i = 0; i <n; ++i)
	// {
	// 	int data;
	// 	cin>>data;
	// 	insertattail(head1,tail1,data);
	// }//3 5 7 13 17 19

	// node*head2=NULL;
	// node*tail2=NULL;
	// int m;
	// cin>>m;
	// for (int i = 0; i <m; ++i)
	// {
	// 	int data;
	// 	cin>>data;
	// 	insertattail(head2,tail2,data);
	// }//0 4 7 8

	node*head=NULL;
	node*tail=NULL;
	int n;
	cin>>n;//5
	for (int i = 0; i <n; ++i)
	{
		int data;
		cin>>data;
		insertattail(head,tail,data);
	}//3 5 1 6 2


	node*x=mergesort(head);//1 2 3 5 6
	printll(x);




	
	return 0;
}