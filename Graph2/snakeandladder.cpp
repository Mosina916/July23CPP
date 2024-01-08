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

	

	int mindistfromsrctodest(U src,U dest){//0 2

		queue<U> q;
		q.push(src);
		unordered_map<U,bool> visited;
		unordered_map<U,int> distance;
		distance[src]=0;

		visited[src]=true;

		while(!q.empty()){
			U s=q.front();//0
		q.pop();
		
		for(auto x: h[s]){
			if(!visited[x]){
				q.push(x);
				visited[x]=true;
				distance[x]=distance[s]+1;
			}
		}

		}

		return distance[dest];
	
	}


	int singlesourceshortestpath(U src,U dest){//0 2
		queue<U> q;
		q.push(src);
		unordered_map<U,bool> visited;
		unordered_map<U,int> distance;
		unordered_map<U,U> parent;
		// parent[src]=src;
		distance[src]=0;
		visited[src]=true;
		while(!q.empty()){
			U s=q.front();//0
		q.pop();
		for(auto x: h[s]){
			if(!visited[x]){
				q.push(x);
				visited[x]=true;
				distance[x]=distance[s]+1;
				parent[x]=s;
			}
		}

		}

		U d=dest;
		while(src!=d){
			cout<<d<<"<--";
			d=parent[d];
		}
		cout<<d<<endl;

		return distance[dest];
	}



};

// 2 --> 1 3 
// 3 --> 4 1 2 
// 4 --> 0 1 3 
// 1 --> 0 4 3 2 
// 0 --> 1 4 
int main(){
	Graph<int> g;

	int board[50] = {0};
	board[2] = 13;
	board[5] = 2;
	board[9] = 18;
	board[18] = 11;
	board[17] = -13;
	board[20] = -14;
	board[24] = -8;
	board[25] = -10;
	board[32] = -2;
	board[34] = -22;

	for(int src=0;src<=35;src++){
		for(int dice =1;dice<=6;dice++){
		int dest=src+dice+board[src+dice];
	g.addedge(src,dest);

	}

	}

	cout<<g.singlesourceshortestpath(0,36)<<endl;
	

	



	return 0;
}

	