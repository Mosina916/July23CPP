#include<iostream>
using namespace std;
int multiplepath(int x,int y){
	if(x==0 and y==0){
		return 1;
	}


	int ans=0;
	// COL sum
	for(int k=x-1;k>=0;k--){
		ans+=multiplepath(k,y);
	}

	// // row sum
	for(int k=y-1;k>=0;k--){
		ans+=multiplepath(x,k);
	}

	return ans;

}

int multiplepathtd(int x,int y,int arr[100][100]){
	if(x==0 and y==0){
		return arr[x][y]=1;
	}
	if(arr[x][y]!=0){
		return arr[x][y];
	}


	int ans=0;
	// COL sum
	for(int k=x-1;k>=0;k--){
		ans+=multiplepathtd(k,y,arr);
	}

	// // row sum
	for(int k=y-1;k>=0;k--){
		ans+=multiplepathtd(x,k,arr);
	}

	return arr[x][y]=ans;

}

// multiple jumps allowed
int main(){
	int x,y;
	cin>>x>>y;//3 3 from 0 0

	int arr[100][100]={0};
	cout<<multiplepathtd(x,y,arr)<<endl;

	// cout<<multiplepath(x,y)<<endl;
	for (int i = 0; i <=x; ++i)
	{
		for (int j = 0; j<=y; j++)
		{
			cout<<arr[i][j]<<" ";
		}

		cout<<endl;
	}


	return 0;
}