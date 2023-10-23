#include<iostream> 
#include<cmath>
using namespace std;
int co=0;
bool kyamaiqueenrakhsaktihun(int i,int j,int board[100][100],int n){
	// verticcal check
	for(int k=i-1;k>=0;k--){
		if(board[k][j]==1){
		return false;
	}

	}

	// left dia
	int u=i-1;//1
	int v=j+1;//3

	while(u>=0 and v<n){
		if(board[u][v]==1){
		return false;
	}
	u--;
	v++;

	}
	




	// right diag
	int l=i-1;
	int m=j-1;
	while(l>=0 and m>=0){
		if(board[l][m]==1){
		return false;
	}
	l--;
	m--;

	}


	return true;
	


	
}
bool nqueen(int board[100][100],int n,int i){
	// base case
	if(i==n){
		for(int l=0;l<n;l++){
			for(int k=0;k<n;k++){
				cout<<board[l][k]<<" ";

			}
			cout<<endl;
		}
		co++;
		// return true;
		cout<<endl;
		return false;
	}


	// rec case
	for(int j=0;j<n;j++){
		if(kyamaiqueenrakhsaktihun(i,j,board,n)==true){
		board[i][j]=1;
		bool bakikaans=nqueen(board,n,i+1);
		if(bakikaans==true){
			return true;
		}
		board[i][j]=0;//backtracking

	}

	}
	return false;
	


}

int main(){
	int n;
	cin>>n;
	int board[100][100]={0};
	nqueen(board,n,0);
	cout<<co<<endl;

	

	return 0;
}