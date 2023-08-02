#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;//5
	int ans=0;
	// 1^2^3^4^5
	for(int i=1;i<=n;i++){
		ans=ans^i;//1^2^3^4^5
	}


	/*4 1 3 5*/
	int  no;
	for(int i=1;i<=n-1;i++){
	cin>>no;
	 ans=ans^no;//1^2^3^4^5^4^1^3^5
	}

	cout<<ans<<endl;







	return 0;
}