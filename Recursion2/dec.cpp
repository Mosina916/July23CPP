#include<iostream>
using namespace std;
void dec(int n){
	// base case
	if(n==0){
		return;

	}
	// reccase
	cout<<n<<endl;
	dec(n-1);
}
int main(){
	int n;
	cin>>n;//5
	// you have to print n to 1 in dec order
	// 5 4 3  2 1
	dec(n);

	

	return 0;
}