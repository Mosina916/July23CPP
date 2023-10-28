#include<iostream>
using namespace std;
int nways(int n,int k){
	// base case
	if(n==0){
		return 1;

	}
	if(n<0){
		return 0;
	}
	// rec case
	int ans=0;
	for(int i=1;i<=k;i++){
		ans=ans+nways(n-i,k);
	}
	return ans;
}
int main(){
	int n,k;
	cin>>n>>k;
	cout<<nways(n,k)<<endl;


	return 0;
}