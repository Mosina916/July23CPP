#include<iostream>
using namespace std;
// *
// **
// ***
// ****
// *****
int main(){
	int tr;
	cin>>tr;
	int rowno=1;
	while(rowno<=tr){
	// 1 row -->4
	int i=1;
	while(i<=rowno){
		cout<<'*';
		i=i+1;
	}
	cout<<endl;
	rowno=rowno+1;
}


	return 0;
}