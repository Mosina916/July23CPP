#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int no;
	int p=0;
	int ans=0;
	cin>>no;//13
	int cou=0;

	while(no>0){
		int rem=no%2;
		if(rem==1){
			cou++;
		}
	no=no/2;
	ans=rem*pow(10,p)+ans;
	p++;

	}

	cout<<cou<<endl;
	





	



	
	
	return 0;
}