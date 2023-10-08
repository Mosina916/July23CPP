#include<iostream>
using namespace std;
void inc(int n){
	// base case
	if(n==0){
		return;
	}
	// reccase
	inc(n-1);//1 2 3 4
	cout<<n<<endl;
}
int main(){
	int n;
	cin>>n;//5
	// you have to print 1 to n in dec order
	//1 2 3 4 5
	inc(n);
	return 0;
}