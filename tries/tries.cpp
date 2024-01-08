#include <iostream>
#include <unordered_map>
using namespace std;
class node{
public:

	char ch;
	bool isterminal;
	unordered_map<char,node*> h;
	node(char c){
		ch=c;
		isterminal=false;

	}
};

class tries
{
	node* root;

public:

	tries(){
		root=new node('\0');

	}

	void insert(string s){//"coper"
		node*temp=root;
		for(int i=0;s[i]!='\0';i++){
			char x=s[i];//r
		if(temp->h.count(x)){
			temp=temp->h[x];


		}
		else{
			temp->h[x]=new node(x);
			temp=temp->h[x];
			
		}

		}

		temp->isterminal=true;

	}

	// length(key)

	bool search(string key){
		node*temp=root;

		for(int i=0;key[i]!='\0';i++){
			char currchar=key[i];//p
			if(temp->h.count(currchar)){
			temp=temp->h[currchar];


		}
		else{
			return false;
		}

		}
		return temp->isterminal;

	}
	
	
};
int main(){
	tries t;

	t.insert("coder");
	// t.insert("cop");
	t.insert("copper");

	if(t.search("cop")==true){
		cout<<"key is present"<<endl;
	}
	else{

		cout<<"key is not present"<<endl;

	}




	return 0;
}