#include<iostream>
using namespace std;
int main(){
	int infer,finfer,step;
	cin>>infer>>finfer>>step;//0 300 20\

	int fer=infer;//0
	while(fer<=finfer){
		// int c=(5/9)*(fer-32);//-17
		int c=(5)*(fer-32)/9;//-17

		cout<<fer<<'\t'<<c<<endl;
		fer=fer+step;


	}





	return 0;
}