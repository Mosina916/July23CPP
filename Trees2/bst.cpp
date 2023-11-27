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


int main(){

	node*root=createbst();
	levelwiseprint(root);
	int key;
	cin>>key;


	if(searchinbst(root,key)==true){
		cout<<"key is present"<<endl;
	}
	else{
		cout<<"key is not  present"<<endl;
	}

	
	


	return 0;
}