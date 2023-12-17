#include<iostream> 
#include<list>
using namespace std;
class Graph{
	list<int>*l;
	int n;
public: 

	Graph(int N){
		l=new list<int>[N];
		n=N;

	}

	void addedge(int u,int v,bool bidire=true){

		l[u].push_back(v);
		// if(bidire){
			l[v].push_back(u);

		// }

	}

	void printg(){
		for(int i=0;i<n;i++){
			cout<<i<<" --> ";
			for(int x:l[i]){

				cout<<x<<" ";


			}

			cout<<endl;
		}
	}


};
int main(){
	Graph g(5);
	g.addedge(0,1);
	g.addedge(0,4);
	g.addedge(1,4);
	g.addedge(4,3);
	
	g.addedge(1,3);
	g.addedge(1,2);
	g.addedge(2,3);

	g.printg();


	

	return 0;
}