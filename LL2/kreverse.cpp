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


node* reversell(node*head){

	node*curr=head;
	node*prev=NULL;

	while(curr!=NULL){
		node*forward=curr->next;
		curr->next=prev;
		prev=curr;
		curr=forward;

	}


	return prev;


	
}

node* krevesre(node*head,int k){

	if(head==NULL){
		return head;
	}

	node*temp=head;
	for (int i = 1; i <=k-1; ++i)
	{
		temp=temp->next;
	}

	node*t=temp->next;
	temp->next=NULL;
	node*a=reversell(head);
	node*b=krevesre(t,k);
	head->next=b;
	// node*c=a;
	// for (int i = 1; i <=k-1; ++i)
	// {
	// 	c=c->next;
	// }


	// c->next=b;
	return a;

}


int main(){

	node*head=NULL;
	node*tail=NULL;
	int n;
	cin>>n;
	for (int i = 0; i <n; ++i)
	{
		int data;
		cin>>data;
		insertattail(head,tail,data);
	}

	// node*x=reversell(head);
	// printll(x);

	int k;
	cin>>k;


	node*x=krevesre(head,k);
	printll(x);
	



	
	return 0;
}