#include<iostream>
#include<vector>
using namespace std;
class heap{

	vector<int> v;

	// push
public:
	heap(){
		v.push_back(-1);
	}
	void push(int d){
		v.push_back(d);
		int child=v.size()-1;

		while(child!=1){
				int parent=child/2;
		if(v[child]<v[parent]){
			swap(v[child],v[parent]);

		}
		child=parent;

		}
	
	}
	void heapify(int index){
		int mininde=index;
		int lci=2*index;
		int rci=lci+1;
		if(lci<v.size() and v[mininde]>v[lci]){
			mininde=lci;
		}
		if(rci<v.size() and v[mininde]>v[rci]){
			mininde=rci;
		}

		if(mininde!=index){//base case

			swap(v[index],v[mininde]);
			heapify(mininde);
		}
	}


	// pop

	void pop(){
		swap(v[1],v[v.size()-1]);
		v.pop_back();
		heapify(1);
	}


	// size

	int size(){
		return v.size()-1;

	}

	// top
	int top(){
		return v[1];
	}

	// empty
	bool empty(){
		return v.size()==1;
	}


};


// heap sort

int main()
{
	heap h;

	h.push(1);
	h.push(2);
	h.push(3);
	h.push(17);
	h.push(19);
	h.push(36);
	h.push(7);
	h.push(25);
	h.push(100);

	h.push(0);

		while(!h.empty()){
		cout<<h.top()<<" ";//0
		h.pop();

		}
	





	
	return 0;
}