#include<iostream>
using namespace std;
int maxprofitwine(int *bp,int l,int r,int year){

	// base case
	if(l>r){
		return 0;
	}
	// rec case
	int op1=bp[l]*year+maxprofitwine(bp,l+1,r,year+1);
	int op2=bp[r]*year+maxprofitwine(bp,l,r-1,year+1);

	return max(op1,op2);
}
int maxprofitwinetd(int *bp,int l,int r,int year,int arr[100][100]){

	// base case
	if(l>r){
		return arr[l][r]=0;
	}
	if(arr[l][r]!=0){
		return arr[l][r];
	}
	// rec case
	int op1=bp[l]*year+maxprofitwinetd(bp,l+1,r,year+1,arr);
	int op2=bp[r]*year+maxprofitwinetd(bp,l,r-1,year+1,arr);

	return arr[l][r]=max(op1,op2);
}


int bottomup(int *bp,int n){

	int arr[100][100]={0};

	// diagonal fill

	for(int i=0;i<n;i++){
		arr[i][i]=n*bp[i];
	}

	for(int i=n-2;i>=0;i--){
		for(int j=0;j<n;j++){
		if(j>i){
		int year=n-(j-i);//4
		int op1=bp[i]*year+arr[i+1][j];
		int op2=bp[j]*year+arr[i][j-1];
		arr[i][j]=max(op1,op2);
	}
	}
	}

	for (int i = 0; i <n; ++i)
	{
		for (int j = 0; j<n; j++)
		{
			cout<<arr[i][j]<<" ";
		}

		cout<<endl;
	}

	cout<<endl;

	return arr[0][n-1];


	
	
}

int main(){
	int bp[]={2,3,5,1,4};
	int n=sizeof(bp)/sizeof(int);
	// cout<<maxprofitwine(bp,0,n-1,1)<<endl;

	// int arr[100][100]={0};

	// cout<<maxprofitwinetd(bp,0,n-1,1,arr)<<endl;


	// for (int i = 0; i <n; ++i)
	// {
	// 	for (int j = 0; j<n; j++)
	// 	{
	// 		cout<<arr[i][j]<<" ";
	// 	}

	// 	cout<<endl;
	// }

	cout<<bottomup(bp,n)<<endl;

	

	return 0;
}