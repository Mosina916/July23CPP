#include<iostream>
using namespace std;
int main(){
	int ans=0;
	int no;
	cin>>no;//35 3+5+4-->12

	while(no>0){
		int ld=no%10;
	ans=ans*10+ld;
	no=no/10;

	}

	cout<<ans<<endl;
	

	


	


	
	

	return 0;
}