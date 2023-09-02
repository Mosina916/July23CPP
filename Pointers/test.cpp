#include<iostream>
using namespace std;
#include <unordered_map>
#include <list>
#include<queue>
#define pb push_back

void countisland(int arr[1000][1000],int row,int col,int i,int j){

	if(i<0||j<0||i>=row||j>=col){
		return;
	}
	if(arr[i][j]==0){
		return;
	}
	// cout<<"mosina"<<endl;
	// if(arr[i][j]==1){
		arr[i][j]=0;

	// }
	
	countisland(arr,row,col,i-1,j);
	// countisland(arr,row,col,i-1,j+1);
	countisland(arr,row,col,i,j+1);
	// countisland(arr,row,col,i+1,j+1);
	countisland(arr,row,col,i+1,j);
	// countisland(arr,row,col,i+1,j-1);
	countisland(arr,row,col,i,j-1);
	// countisland(arr,row,col,i-1,j-1);


}

int main(){

	int row,col;
	cin>>row>>col;
	int arr[1000][1000];
	for (int i = 0; i <row;i++)
	{
		for (int j = 0; j <col;j++)
		{
			cin>>arr[i][j];
			
		}
	}
	int comp=0;

	for (int i = 0; i <row;i++)
	{
		for (int j = 0; j <col;j++)
		{
			if(arr[i][j]==1){
				comp++;
				countisland(arr,row,col,i,j); //arr 6 8 0 1

			}
			
		}
	}

	cout<<comp<<endl;
	


	return 0;
}