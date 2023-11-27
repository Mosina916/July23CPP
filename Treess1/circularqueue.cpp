#include<iostream>
using namespace std;
class cqueue{
	int cs;
	int ts;
	int f;
	int r;
	int *arr;

public:
	cqueue(int size=6){
		cs=0;
		ts=size;
		f=0;
		r=-1;
		arr=new int[size];
	}

	void push(int d){
		if(cs<ts){
			r=(r+1)%ts;
			arr[r]=d;
			cs++;
		}
		else{
			cout<<"overflow"<<endl;
		}

	}


	void pop(){
		if(cs>0){
			f=(f+1)%ts;
			
			cs--;
		}
		else{
			cout<<"underflow"<<endl;
		}

	}


	int front(){
		return arr[f];

	}


	int size(){
		return cs;

	}

	bool empty(){
		return cs==0;

	}
};
int main(){

	cqueue k;
	k.push(3);
	k.push(13);
	k.push(53);
	k.push(33);
	k.push(123);
	k.push(127);

	k.pop();
	k.pop();

	k.push(70);
	// k.push(128);//'oveflow'





	while(!k.empty()){
			cout<<k.front()<<" ";
	k.pop();

	}


	cout<<endl;









	return 0;
}