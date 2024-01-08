#include<iostream> 
#include<unordered_map>
#include<list>
#include<queue>
using namespace std;
template<typename U>
class Graph{
	// unordered_map<string,list<string> > h;

	unordered_map<U,list<U> > h;
public: 
	void addedge(U u,U v,bool bidire=false){
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

	void dfs(U src,unordered_map<U,bool> &visited){

		cout<<src<<" ";//4

		visited[src]=true;

		for(auto d:h[src]){
			if(!visited[d]){
				dfs(d,visited);
			}

		}
		



	}


};

// 2 --> 1 3 
// 3 --> 4 1 2 
// 4 --> 0 1 3 
// 1 --> 0 4 3 2 
// 0 --> 1 4 
int main(){
	Graph <int> g;
	g.addedge(0,1);
	g.addedge(0,4);
	g.addedge(1,4);
	g.addedge(4,3);
	g.addedge(1,3);
	g.addedge(1,2);
	g.addedge(3,2);
 	unordered_map<int,bool> visited;


	g.dfs(0,visited);

	return 0;
}

	