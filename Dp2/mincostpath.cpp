#include<iostream>
using namespace std;
int mincostpath(int path[4][4],int x,int y){
	// base case
	if(x==0 and y==0){
		return path[x][y];
		
	}
	if(x<0 ||y<0){
		return INT_MAX;

	}
	

	// rec case

	int op1=mincostpath(path,x-1,y);
	int op2=mincostpath(path,x,y-1);
	return min(op1,op2)+path[x][y];


}
int mincostpathtd(int path[4][4],int x,int y,int arr[100][100]){
	// base case
	if(x==0 and y==0){
		return arr[x][y]=path[x][y];
		
	}
	if(x<0 ||y<0){
		return INT_MAX;

	}
	if(arr[x][y]!=0){
		return arr[x][y];
	}
	// rec case

	int op1=mincostpathtd(path,x-1,y,arr);
	int op2=mincostpathtd(path,x,y-1,arr);
	return arr[x][y]=min(op1,op2)+path[x][y];


}

int mincostpathbu(int path[4][4],int x,int y){

	int arr[100][100]={0};
	for(int a=0;a<=x;a++){
		for(int b=0;b<=y;b++){
			if(a==0 and b==0){
				arr[a][b]=path[a][b];
			}
			else if(a==0){
				arr[a][b]=arr[a][b-1]+path[a][b];

			}
			else if(b==0){
				arr[a][b]=arr[a-1][b]+path[a][b];

			}
			else{
				arr[a][b]=min(arr[a-1][b],arr[a][b-1])+path[a][b];
			}
		}
	}

	for (int i = 0; i <=x; ++i)
	{
		for (int j = 0; j<=y; j++)
		{
			cout<<arr[i][j]<<" ";
		}

		cout<<endl;
	}

	return arr[x][y];
	

}

int main(){
	int path[4][4]={
		{2,3,1,2},
		{1,2,3,4},
		{2,2,3,5},
		{1,2,6,3}

	};
	int x,y;
	cin>>x>>y;

	cout<<mincostpathbu(path,x,y)<<endl;


	// cout<<mincostpath(path,x,y)<<endl;

	// int arr[100][100]={0};

	// cout<<mincostpathtd(path,x,y,arr)<<endl;
	// for (int i = 0; i <=x; ++i)
	// {
	// 	for (int j = 0; j<=y; j++)
	// 	{
	// 		cout<<arr[i][j]<<" ";
	// 	}

	// 	cout<<endl;
	// }


	return 0;
}