#include<iostream>
#include<vector>
using namespace std;
vector<int> v1;
vector<int> v2;

void mindenocoins(int amount,int *coins,int cc){
	if(amount==0){
		v2.assign(v1.begin(), v1.end());
		return;
	}


	
	for (int i = 0; i <cc; ++i)
	{
		int bamt=amount-coins[i];//3-6=0
		if(bamt>=0){
			v1.push_back(coins[i]);//3 9
			mindenocoins(bamt,coins,cc);
			v1.pop_back();
		}
	}



	
}



int main(){
	int amount;
	cin>>amount;//12
	int coins[]={3,6,9};
	int cc=sizeof(coins)/sizeof(int);
	mindenocoins(amount,coins,cc);

	for (int i = 0; i <v2.size(); ++i)
	{
		cout<<v2[i]<<" "; 
	}

	cout<<endl;
	


	

	return 0;
}