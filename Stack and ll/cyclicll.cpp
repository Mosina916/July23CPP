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

// 1->2->3 4 5 6 7 8
bool checkcycle(node*head){
	node*s=head;
	node*fast=head;

	while(fast!=NULL and fast->next!=NULL){
		s=s->next;
		fast=fast->next->next;
		if(fast==s){
			return true;
		}
	}

	return false;


}

void createcycle(node*head,int pos){
	node*temp=head;
	while(temp->next!=NULL){
		temp=temp->next;

	}

	node*n=head;

	for (int i = 1; i <=pos-1; ++i)
	{
		n=n->next;
	}

	temp->next=n;

}

void breakcycle(node*head){
	// check cycle
	node*s=head;
	node*fast=head;
	bool kyacyclehai=false;

	while(fast!=NULL and fast->next!=NULL){
		s=s->next;
		fast=fast->next->next;
		if(fast==s){
			kyacyclehai=true;break;
		}
	}

	// if cycle is there then break it
	if(kyacyclehai){
		// then break
		s=head;


		while(fast->next!=s->next){
			s=s->next;
		fast=fast->next;

		}


		fast->next=NULL;
		
	}
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
	int pos;
	cin>>pos;
	createcycle(head,pos);

	breakcycle(head);

	printll(head);

	// int pos;
	// cin>>pos;//3

	// createcycle(head,pos);
	// printll(head);
	// if(checkcycle(head)==true){
	// 	cout<<"cycle is present"<<endl;
	// }
	// else{
	// 	cout<<"cycle is not present"<<endl;
	// }
	return 0;
}