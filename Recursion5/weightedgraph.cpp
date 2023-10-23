#include<iostream>
#include<unordered_map>
#include<list>
#include<queue>
#include<string>
using namespace std;

#define pb push_back 
template<typename T>
class graph{
	unordered_map<T,list<pair< T,int> > > h;

public:
	void addedge(T u,T v,int dist,bool bidirec=true){
		h[u].pb(make_pair(v,dist));
		if(bidirec){
			h[v].pb(make_pair(u,dist));

		}
	}
	void printgraph(){	
		for(auto x:h){
			cout<<x.first<<"--> ";
			for(auto p:x.second){
				cout<<'('<<p.first<<" "<<p.second<<"), ";
			}
			cout<<endl;
		}

	}



};


int main(){
	graph< string> g;
	g.addedge("Amritsar","Agra",1);
	g.addedge("Amritsar","jaipur",4);
	g.addedge("jaipur","delhi",2);
	g.addedge("jaipur","mumbai",8);
	g.addedge("Agra","delhi",1);
	g.addedge("Agra","bhopal",2);
	g.addedge("bhopal","mumbai",3);
	g.printgraph();


	
	
	return 0;
}