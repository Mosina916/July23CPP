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

void insertathead(node*&head,node*&tail,int data){
	node*n=new node(data);
	if(head==NULL){
		head=n;
		tail=n;
	}
	else{
		n->next=head;
		head=n;


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


void deleteatfront(node*&head,node*&tail){
	if(head==NULL){
		return;
	}
	else if(head->next==NULL){
		delete head;
		head=NULL;
		tail=NULL;
	}
	else{
		node*temp=head;
		head=head->next;
		delete temp;
		temp=NULL;
	}
}


void deleteatend(node*&head,node*&tail){
	if(head==NULL){
		return;
	}
	else if(head->next==NULL){
		delete head;
		head=NULL;
		tail=NULL;
	}
	else{
		node*temp=head;

		while(temp->next!=tail){
			temp=temp->next;
		}

		delete tail;
		temp->next=NULL;
		tail=temp;	
	}
}


int length(node*head){
	int c=0;
	while(head!=NULL){
		c++;
	head=head->next;


	}

	return c;

}

void insertatanypos(node*&head,node*&tail,int data,int pos){
	if(pos==0){
		insertathead(head,tail,data);
	}
	else if(pos>=length(head)){
		insertattail(head,tail,data);
	}
	else{
		node*temp=head;
		for(int jump=1;jump<=pos-1;jump++){
			temp=temp->next;
		}
		node*n=new node(data);
		n->next=temp->next;
		temp->next=n;
	}
}


void deleetatanypos(node*&head,node*&tail,int pos){
	if(pos==0){
		deleteatfront(head,tail);
	}
	else if(pos>=length(head)-1){
		deleteatend(head,tail);
	}
	else{
		node*temp=head;
		for(int jump=1;jump<=pos-1;jump++){
			temp=temp->next;
		}

		node*x=temp->next;
		temp->next=x->next;
		delete x;
		x=NULL;


	}


}

int lenrec(node*head){

	// base case
	if(head==NULL){
		return 0;
	}


	// rec case
	return 1+lenrec(head->next);

}
bool searchitreatively(node*head,int key){

	while(head!=NULL){
		if(head->d==key){
		return true;
	}
	head=head->next;

	}


	return false;
	

}

bool searchrec(node*head,int key){

	// base case
	if(head==NULL){
		return false;
	}
	// /rec case
	if(head->d==key){
		return true;

	}
	return searchrec(head->next,key);

}

int main(){
	node*head=NULL;
	node*tail=NULL;
	
	// insertattail(head,tail,3);
	// insertattail(head,tail,7);
	// insertattail(head,tail,2);
	// insertattail(head,tail,1);
	// insertattail(head,tail,6);
	// insertathead(head,tail,7);
	// insertathead(head,tail,17);


	int n;
	cin>>n;
	for (int i = 0; i <n; ++i)
	{
		int data;
		cin>>data;
		insertattail(head,tail,data);
	}

	int key;
	cin>>key;

	if(searchitreatively(head,key)){
		cout<<"key is present"<<endl;
	}
	else{
		cout<<"key is not present"<<endl;

	}
	//17 7 3 7 2 1 6
	// printll(head);

	// deleetatanypos(head,tail,0);

	//  //17 7 3 7  1 6
	// printll(head);

	// cout<<lenrec(head)<<endl;
	// // insertatanypos(head,tail,20,4);
	// // 17 7 3 7 20 2 1 6

	// insertatanypos(head,tail,20,0);
	// 20 17 7 3 7 2 1 6


	// printll(head);
	// printll(head);


	
	return 0;
}