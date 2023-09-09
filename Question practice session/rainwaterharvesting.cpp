#include<iostream>
using namespace std;
int rmb[100000];
int height[100000];
int lmb[100000];
int main(){
	int n;
	cin>>n;
	
	for (int i = 0; i <n; ++i)
	{
		cin>>height[i];//5 2 3 1 6 4 3 2 7

	}


	lmb[0]=height[0];


	for(int i=1;i<n;i++){
		lmb[i]=max(lmb[i-1],height[i]);

	}

	
	rmb[n-1]=height[n-1];

	for(int i=n-2;i>=0;i--){
		rmb[i]=max(rmb[i+1],height[i]);

	}

	int water=0;


	for(int j=0;j<n;j++){
		water=water+min(lmb[j],rmb[j])-height[j];
	
	}


	cout<<water<<endl;
	


	


	return 0;
}