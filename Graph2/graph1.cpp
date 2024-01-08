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
	void addedge(U u,U v,bool bidire=true){
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

	void bfs(U src){//0

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

		// distance map print

		for(auto l:distance){
			cout<<"distance of "<<src<<" to "<<l.first<<" is "<<l.second<<endl;
		}
		
	}


	// void searchkey(U src,U key){//0

	// 	queue<U> q;
	// 	q.push(src);
	// 	unordered_map<U,bool> visited;
	// 	visited[src]=true;

	// 	while(!q.empty()){
	// 		U s=q.front();
	// 	q.pop();
	// 	// cout<<s<<endl;
	// 	if(s==key){
	// 		return true;
	// 	}
	// 	for(auto x: h[s]){
	// 		if(!visited[x]){
	// 			q.push(x);
	// 			visited[x]=true;
	// 		}
	// 	}

	// 	}

	// 	return false;


		

		
	// }


	void bfs(U src){//0

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

		// distance map print

		for(auto l:distance){
			cout<<"distance of "<<src<<" to "<<l.first<<" is "<<l.second<<endl;
		}
		
	}



};

// 2 --> 1 3 
// 3 --> 4 1 2 
// 4 --> 0 1 3 
// 1 --> 0 4 3 2 
// 0 --> 1 4 
int main(){
	Graph<int> g;
	g.addedge(0,1);
	g.addedge(0,4);
	g.addedge(1,4);
	g.addedge(4,3);
	g.addedge(1,3);
	g.addedge(1,2);
	g.addedge(3,2);

	

	g.printg();

	g.bfs(0);

	

	return 0;
}