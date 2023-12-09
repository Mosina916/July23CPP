#include<iostream>
using namespace std;

class node{
public:

	string fname;
	string fcol;
	node*next;
	node(string fn,string fc){
		fname=fn;
		fcol=fc;
		next=NULL;
	}
};

class hashmap{
	node**arr;
	int ts;
	int cs;

public:
	
	
	hashmap(int t=7){
		arr=new node*[t];
		ts=t;
		cs=0;
		for (int i = 0; i <ts; ++i)
		{
			arr[i]=NULL;
		}

	
	}

	

	int hashfunction(string fn){
		int ans=0;
		int mult=1;

		for(int i=0;i<=fn.length()-1;i++){
			ans=((ans%ts)+(fn[i]%ts*mult%ts)%ts)%ts;
		mult=(mult%ts*29%ts)%ts;
		

		}

		return ans%ts;
		


	}


	void rehashing(){
		node**oldarr=arr;
		int oldts=ts;
		arr=new node*[2*ts];
		cs=0;
		ts=2*ts;
		for (int i = 0; i <ts; ++i)
		{
			arr[i]=NULL;
		}

		// copy

		for (int i = 0; i <oldts; ++i)
		{
			node*h=oldarr[i];
			while(h!=NULL){
				insert(h->fname,h->fcol);
				h=h->next;
			}
		}
		delete[] oldarr;
		oldarr=NULL;
	}


	void insert(string fn,string fc){
		int index=hashfunction(fn);
		node*n=new node(fn,fc);
		n->next=arr[index];
		arr[index]=n;
		cs++;
		if(cs*1.0/ts>0.5){
			rehashing();
		}

	}

	void printhashmap(){
		for(int i=0;i<ts;i++){
			cout<<i<<" : ";
			node*h=arr[i];
			while(h!=NULL){
				cout<<"( "<<h->fname<<", "<<h->fcol<<") ";
				h=h->next;
			}
			cout<<endl;
		}
	}

	bool search(string fna){
		int index=hashfunction(fna);


		node*h=arr[index];
		while(h!=NULL){
			if(h->fname==fna){
			return true;
		}
		h=h->next;

		}

		return false;
		


	}
};
int main(){

	hashmap h;
	h.insert("Mango","yellow");
	// h.insert("Apple","red");
	h.insert("banana","yellow");
	h.insert("grapes","green");
	h.insert("grap","green");
	h.insert("gr","green");
	h.insert("gyrr","green");
	h.insert("gasrd","green");


	if(h.search("Apple")){
		cout<<"key is present"<<endl;
	}
	else{
		cout<<"key is not present"<<endl;
	}

	h.printhashmap();











	return 0;
}