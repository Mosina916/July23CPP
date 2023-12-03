#include<iostream>
#include<queue>
using namespace std;
class node{
public:
	int data;
	node*left;
	node*right;
	node(int d){
		data=d;
		left=NULL;
		right=NULL;
	}
};
// 
node* insertinbst(node*root,int data){//null 6
	if(root==NULL){
		root=new node(data);
		// return root;
	}
	else if(data<=root->data){

		root->left=insertinbst(root->left,data);
		// return root;
	}
	else{
		root->right=insertinbst(root->right,data);
		// return root;
	}

	return root;

}

node* createbst(){
	node*root=NULL;

	int data;
	cin>>data;//8
	while(data!=-1){
		root=insertinbst(root,data);
	cin>>data;//-1

	}
	return root;

}

bool searchinbst(node*root,int key){//4
	if(root==NULL){
		return false;
	}

	if(root->data==key){
		return true;
	}
	else if(root->data>key){
		return searchinbst(root->left,key);
	}
	else{
		return searchinbst(root->right,key);

	}

	

}
void levelwiseprint(node*root){
	queue<node*> q;
	q.push(root);
	q.push(NULL);

	while(!q.empty()){
		node*x=q.front();
		q.pop();
		if(x==NULL){
			cout<<endl;
			if(!q.empty()){
				q.push(NULL);
			}

		}
		else{
			cout<<x->data<<' ';
			if(x->left!=NULL){
				q.push(x->left);
			}
			if(x->right!=NULL){
				q.push(x->right);
			}
		}
	}

} 

void printinrangek1k2(node*root,int k1,int k2){
	

	// base case
	if(root==NULL){
		return;
	}


	// rec case
	printinrangek1k2(root->left,k1,k2);
	if(root->data>=k1 and root->data<=k2){
		cout<<root->data<<" ";
	}
	printinrangek1k2(root->right,k1,k2);

}

bool checbst(node*root,int mi=INT_MIN,int ma=INT_MAX){
	if(root==NULL){
		return true;
	}

	if((root->data>=mi and root->data<=ma) and checbst(root->left,mi,root->data) and checbst(root->right,root->data+1,ma)){
			return true;
	}

	return false;

}

class BH{
public:
	int h;
	bool b;
	BH(){
		h=0;
		b=true;
	}
};
BH optiisbal(node*root){
	BH x;
	if(root==NULL){
		return x;
	}

	BH y=optiisbal(root->left);
	BH z=optiisbal(root->right);
	x.h=max(y.h,z.h)+1;
	if(abs(y.h-z.h)<=1  and y.b and z.b){
		x.b=true;
	}
	else{
		x.b=false;
	}

	return x;

}


int arr[]={1,2,3,4,6,8,9,10};
node* buildbstfromarr(int s,int e){
	if(s>e){
		return NULL;
	}
	int mid=(s+e)/2;
	node*root=new node(arr[mid]);
	root->left=buildbstfromarr(s,mid-1);
	root->right=buildbstfromarr(mid+1,e);
	return root;
}

class ll{
public: 
	node*h;
	node*t;
	ll(){
		h=NULL;
		t=NULL;
	}
};

ll bsttosortedll(node*root){
	ll x;
	if(root==NULL){
		return x;
	}


	// case 1 no lst no rst
	if(root->left==NULL and root->right==NULL){
		x.h=root;
		x.t=root;
		// return x;

	}
	// case 2 lst no rst
	else if(root->left!=NULL and root->right==NULL){
		ll y=bsttosortedll(root->left);
		y.t->right=root;
		x.h=y.h;
		x.t=root;
		// return x;

	}
	// case 3 no lst but  rst
	else if(root->left==NULL and root->right!=NULL){
		ll z=bsttosortedll(root->right);
		root->right=z.h;
		x.h=root;
		x.t=z.t;
		// return x;

	}
	// case 4 ? both exist
	else{
		ll y=bsttosortedll(root->left);
		ll z=bsttosortedll(root->right);
		y.t->right=root;
		root->right=z.h;
		x.h=y.h;
		x.t=z.t;
		// return x;


	}

	return x;

}

node* deletioninbst(node*root,int key){
	if(key<root->data){
		root->left=deletioninbst(root->left,key);
		return root;

	}
	else if(key>root->data){
		root->right=deletioninbst(root->right,key);
		return root;

		
	}
	else{
		// equal to root data

		// case 1 no lst no rst
		if(root->left==NULL and root->right==NULL){
			delete root;
			root=NULL;
			return root;
		}
		// case 2  lst no rst
		else if(root->left!=NULL and root->right==NULL){
			node*temp=root->left;
			delete root;
			root=temp;
			return root;
		}
		// case 3 no lst yes rst
		else if(root->left==NULL and root->right!=NULL){
			node*temp=root->right;
			delete root;
			root=temp;
			return root;
		}
		// case 4 both 
		else{
			node*temp=root->left;
			while(temp->right!=NULL){
				temp=temp->right;
			}

			swap(temp->data,root->data);

			root->left=deletioninbst(root->left,key);

			return root;



		}



	}

}

void printll(node*head){
	while(head!=NULL){
		cout<<head->data<<" ";
	head=head->right;

	}

	cout<<endl;
	
}





int main(){
	int n=sizeof(arr)/sizeof(int);
	node*root=buildbstfromarr(0,n-1);
	levelwiseprint(root);
	int key;
	cin>>key;

	root=deletioninbst(root,key);
	levelwiseprint(root);

	// ll d=bsttosortedll(root);
	// printll(d.h);

	// node*root=createbst();
	// levelwiseprint(root);
	// // int k1,k2;
	// // cin>>k1>>k2;
	// // printinrangek1k2(root,k1,k2);

	// if(checbst(root)){
	// 	cout<<"yes"<<endl;
	// }
	// else{
	// 	cout<<"NO"<<endl;

	// }


	// BH d=optiisbal(root);
	// if(d.b==true){
	// 	cout<<"balanced"<<endl;

	// }
	// else{
	// 	cout<<"not balanced"<<endl;

	// }
	
	


	return 0;
}