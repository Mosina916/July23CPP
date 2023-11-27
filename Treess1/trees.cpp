#include<iostream>
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

	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);

}

void inorder(node*root){
	if(root==NULL){
		return;
	}

	
	inorder(root->left);
	cout<<root->data<<" ";
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

int counttotalnodes(node*root){
	// b case 
	if(root==NULL){
		return 0;
	}

	// rec case
	return 1+counttotalnodes(root->left)+counttotalnodes(root->right);
}

int sumofdataofnodes(node*root){
	// b case 
	if(root==NULL){
		return 0;
	}

	// rec case
	return root->data+sumofdataofnodes(root->left)+sumofdataofnodes(root->right);
}

int height(node*root){
	if(root==NULL){
		return 0;
	}

	return 1+max(height(root->left),height(root->right));
}




int main(){
	node*root=buildtree();
	int key;
	cin>>key;

	if(searchkey(root,key)==true){
		cout<<"key is present"<<endl;
	}
	else{
		cout<<"key is not present"<<endl;
	}


	// cout<<height(root)<<endl;

	// preorder(root);

	// cout<<endl;

	// inorder(root);

	// cout<<endl;

	// postorder(root);

	// cout<<endl;



	return 0;
}