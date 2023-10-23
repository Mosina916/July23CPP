#include<iostream> 
#include<cmath>
using namespace std;
bool kyamainumrakhsaktihun(int i,int j,int mat[9][9],int n,int num){
	// verticcal check

	for(int k=0;k<n;k++){
		if(mat[k][j]==num){
			return false;
		}
	}

	// row check
	for(int k=0;k<n;k++){
		if(mat[i][k]==num){
			return false;
		}
	}

	// formula 
	int p=sqrt(n);//3

	int si=(i/p)*p;//3
	int sj=(j/p)*p;//3


	for(int l=si;l<=si+p-1;l++){
		for(int m=sj;m<=sj+p-1;m++){
		if(mat[l][m]==num){
		return false;
	}

	}

	}


	return true;
	
	
}
bool sudukosolver(int mat[9][9],int i,int j,int n){
	// base case
	if(i==n){
		for(int l=0;l<n;l++){
			for(int k=0;k<n;k++){
				cout<<mat[l][k]<<" ";

			}
			cout<<endl;
		}

		// return true;

		return false;
	}


	// rec case
	if(j==n){
		sudukosolver(mat,i+1,0,n);

	}
	if(mat[i][j]!=0){
		// filled
		return sudukosolver(mat,i,j+1,n);

	}
	else{
		// unfilled
		for(int num=1;num<=9;num++){
			if(kyamainumrakhsaktihun(i,j,mat,n,num)){
			mat[i][j]=num;//3
			bool bakikaans=sudukosolver(mat,i,j+1,n);
			if(bakikaans==true){
				return true;
			}
			mat[i][j]=0;//backtracking

		}

		}
		// mat[i][j]=0;

		return false;
		


	}

}
int main(){
	int mat[9][9] =
		{{0,3,0,0,7,0,0,0,0},
		{6,0,0,1,9,5,0,0,0},
		{0,9,8,0,0,0,0,6,0},
		{8,0,0,0,6,0,0,0,3},
		{4,0,0,8,0,3,0,0,1},
		{7,0,0,0,2,0,0,0,6},
		{0,6,0,0,0,0,2,8,0},
		{0,0,0,4,1,9,0,0,5},
		{0,0,0,0,8,0,0,7,9}};

		sudukosolver(mat,0,0,9);

	

	return 0;
}