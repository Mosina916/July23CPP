#include<iostream> 
#include<unordered_map>
#include<list>
using namespace std;
class Graph{
	unordered_map<string,list<string> > h;
public: 
	void addedge(string u,string v,bool bidire=false){
		h[u].push_back(v);
		if(bidire){
			h[v].push_back(u);
		}

	}

	void printg(){
		for(auto x:h){

			cout<<x.first<<" --> ";
			for(auto y:x.second){
				cout<<y<<" ";
			}
			cout<<endl;

		}
		
	}


};
int main(){
	Graph g;
	g.addedge("modi","trump",true);
	g.addedge("putin","trump");
	g.addedge("putin","modi");
	g.addedge("pope","");
	g.addedge("putin","pope");
	g.addedge("modi","yogi",true);
	g.addedge("Prabhu","modi");
	g.addedge("yogi","prabhu");
	

	g.printg();

	// h["mango"].push_back("yellow");


	

	return 0;
}