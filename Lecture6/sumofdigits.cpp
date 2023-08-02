#include<iostream>
using namespace std;
int main(){
	int sum=0;
	int no;
	cin>>no;//35 3+5+4-->12

	while(no>0){
		int ld=no%10;
	sum=sum+ld;
	no=no/10;

	}

	cout<<sum<<endl;
	

	


	


	
	

	return 0;
}