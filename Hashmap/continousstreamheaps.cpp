#include<iostream>
#include<queue>
using namespace std;
void printheap(priority_queue<int,vector<int>, greater<int> > h){


	while(!h.empty()){
		cout<<h.top()<<" ";
	h.pop();

	}

	cout<<endl;
	

}
int main(){

	priority_queue<int,vector<int>, greater<int> > h;
	int k;
	cin>>k;//3
	int co=1;

	while(1){
		int data;
		cin>>data;//3 1 2 4 
		if(co<=k){
			h.push(data);
			co++;
		}
		else{
			if(data==-1){
				printheap(h);
			}
			else{
				if(data>h.top()){
					h.pop();
					h.push(data);
				}
			}
		}
	}

	return 0;
}