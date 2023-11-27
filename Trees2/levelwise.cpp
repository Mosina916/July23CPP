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
// i/p 8 10 1 -1 -1 6 4 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1
node* buildtree(){
	int data;
	cin>>data;
	if(data==-1){
		return NULL;
	}
	node*root=new node(data);
	root->left=buildtree();
	root->right=buildtree();
	return root;
}

// print
bool searchkey(node*root,int key){
	// base case
	if(root==NULL){
		return false;
	}

	// rec case
	if((root->data==key)||searchkey(root->left,key)||searchkey(root->right,key)){
		return true;
	}
	return false;
}


void preorder(node*root){
	if(root==NULL){
		return;
	}

	cout<<root->data<<",";
	preorder(root->left);
	preorder(root->right);

}

void inorder(node*root){
	if(root==NULL){
		return;
	}

	
	inorder(root->left);
	cout<<root->data<<",";
	inorder(root->right);

}


void postorder(node*root){
	if(root==NULL){
		return;
	}

	
	postorder(root->left);
	postorder(root->right);
	cout<<root->data<<" ";


}

int preorarr[]={8,10,1,6,4,7,3,14,13};
int inorderarr[]={1,10,4,6,7,8,3,13,14};
int i=0;
node* buildusingprein(int s,int e){
	if(s>e){
		return NULL;
	}
	int d=preorarr[i];//8
	i++;//i=1
	int k;
	for(int l=s;l<=e;l++){
		if(inorderarr[l]==d){
			k=l;//5
			break;

		}
	}
	node* root=new node(d);
	root->left=buildusingprein(s,k-1);
	root->right=buildusingprein(k+1,e);
	return root;

}
class hd{
public:
	int h;
	int d;
	hd(){
		h=0;
		d=0;
	}
};

hd diameterinon(node*root){
	hd x;
	if(root==NULL){
		return x;
	}

	hd y=diameterinon(root->left);
	hd z=diameterinon(root->right);
	x.h=max(y.h,z.h)+1;
	int op=y.d;
	int op2=z.d;
	int op3=y.h+z.h;
	x.d=max(op,max(op2,op3));
	return x;

}

void mirror(node*root){
	// b case
	if(root==NULL){
		return;
	}

	// rec case
	swap(root->left,root->right);
	mirror(root->left);
	mirror(root->right);
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
int main(){
	
	node*root=buildtree();

	levelwiseprint(root);
	// mirror(root);
	// preorder(root);







	// node*root=buildtree();

	// preorder(root);
	// cout<<endl;
	// // inorder(root);
	// // cout<<endl;

	


	return 0;
}