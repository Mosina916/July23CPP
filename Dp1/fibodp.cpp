#include<iostream>
using namespace std;
// rec code

int fibo(int pos){
	// b case
	if(pos==0){
		return 0;
	}
	if(pos==1){
		return 1;
	}

	// rec case
	return fibo(pos-1)+fibo(pos-2);
}


int fibotd(int pos,int *dp){
	// b case
	if(pos==0||pos==1){
		return dp[pos]=pos;
	}
	if(dp[pos]!=-1){
		return dp[pos];
	}
	// rec case
	return dp[pos]=fibotd(pos-1,dp)+fibotd(pos-2,dp);
}


int fibobu(int pos){
	int *arr=new int[pos+1];
	arr[0]=0;
	arr[1]=1;
	for(int i=2;i<=pos;i++){
		arr[i]=arr[i-1]+arr[i-2];
	}


	for (int i = 0; i <=pos; ++i)
	{
		cout<<arr[i]<<" ";
	}

	cout<<endl;


	return arr[pos];

}
int main(){
	int n;
	cin>>n;

	int *dp=new int[n+1];

	for (int i = 0; i <=n; ++i)
	{
		dp[i]=-1;
	}

	


	cout<<fibobu(n)<<endl;

	cout<<fibotd(n,dp)<<endl;

	for (int i = 0; i <=n; ++i)
	{
		cout<<dp[i]<<" ";
	}


	cout<<endl;


	cout<<fibo(n)<<endl;


	

	return 0;
}