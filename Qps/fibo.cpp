#include<iostream>
using namespace std;
int main(){

	int n;
	cin>>n;
	if(n==0||n==1){
		cout<<n<<endl;
		return 0;
	}

	int f1=0;
	int f2=1;
	int times=1;
	while(times<=n-1){
		int f3=f1+f2;//1
	f1=f2;
	f2=f3;
	times++;

	}

	cout<<f2<<endl;

	








	return 0;
}