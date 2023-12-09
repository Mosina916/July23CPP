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
int arr[]={1,2,3,4,6,8,9,10};
void rightview(node*root,int &mlttn,int cl){
	if(root==NULL){
		return;
	}

	if(mlttn<cl){
		cout<<root->data<<" ";
		mlttn++;
	}
	rightview(root->right,mlttn,cl+1);
	rightview(root->left,mlttn,cl+1);

}
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

int main(){
	int n=sizeof(arr)/sizeof(int);
	node*root=buildbstfromarr(0,n-1);
	int t=0;

	rightview(root,t,1);

	return 0;
}