#include<iostream>
using namespace std;
int mindenocoins(int amount,int *coins,int cc){
	if(amount==0){
		return 0;
	}

	int ans=INT_MAX;
	
	for (int i = 0; i <cc; ++i)
	{
		int bamt=amount-coins[i];
		if(bamt>=0){
		int rans=mindenocoins(bamt,coins,cc);
		if(rans<ans){
			// cout<<coins[i]<<" ";
			
			ans=rans+1;

		}
		}
	}

	// cout<<p<<endl;

	return ans;
}


int mindenocoinstd(int amount,int *coins,int cc,int *arr){
	if(amount==0){
		return arr[amount]=0;
	}

	if( arr[amount]!=INT_MAX){
		return  arr[amount];
	}

	int ans=INT_MAX;
	
	for (int i = 0; i <cc; ++i)
	{
		int bamt=amount-coins[i];
		if(bamt>=0){
		int rans=mindenocoinstd(bamt,coins,cc,arr);
		if(rans<ans){
			// cout<<coins[i]<<" ";
			
			ans=rans+1;

		}
		}
	}


	return  arr[amount]=ans;
}


int main(){
	int amount;
	cin>>amount;//13
	int coins[]={9,6,5,1};
	int cc=sizeof(coins)/sizeof(int);
	cout<<mindenocoins(amount,coins,cc)<<endl;
	int *arr=new int[amount+1];

	for (int i = 0; i <=amount; ++i)
	{
		arr[i]=INT_MAX;
	}

	cout<<mindenocoinstd(amount,coins,cc,arr)<<endl;
	for (int i = 0; i <=amount; ++i)
	{
		cout<<arr[i]<<" ";
	}

	cout<<endl;


	

	return 0;
}