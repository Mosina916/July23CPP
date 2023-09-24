#include<iostream>
using namespace std;
void formmatrix(char arr[100][100],int r,int c){
	int sr=0,sc=0,ec=c-1,er=r-1;
	char ch='X';

	while(sr<=er and sc<=ec){

	// fopr ist row
	for(int i=sc;i<=ec;i++){
		arr[sr][i]=ch;

	}
	sr++;

	// last col
	for(int j=sr;j<=er;j++){
		arr[j][ec]=ch;
	}
	ec--;

	// last row
	
	for(int k=ec;k>=sc;k--){
		arr[er][k]=ch;
	}
	er--;


// ist col
	
		for(int l=er;l>=sr;l--){
		arr[l][sc]=ch;
	}
	
	sc++;

	if(ch=='X'){
		ch='O';
	}
	else{
		ch='X';

	}


	}
	
}
	

int main(){
	char arr[100][100];
	int r,c;
	cin>>r>>c;

	formmatrix(arr,r,c);

	for (int i = 0; i <r; ++i)
	{
		for (int j = 0; j < c; j++)
		{
			cout<<arr[i][j]<<' ';
		}
		cout<<endl;
	}


	// https://careers.myntra.com/job-detail/?id=6943806002
	// https://paypal.eightfold.ai/careers/job?pid=274895521653&domain=paypal.com
	// https://nvidia.wd5.myworkdayjobs.com/NVIDIAExternalCareerSite/job/India-Pune/Software-Intern--GPU-Assemblers_JR1971440

	return 0; 
}