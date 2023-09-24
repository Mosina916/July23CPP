#include<iostream>
using namespace std;
void spiralprint(int arr[4][4],int r,int c){
	int sr=0,sc=0,ec=c-1,er=r-1;

	while(sr<=er and sc<=ec){

	// fopr ist row
	for(int i=sc;i<=ec;i++){
		cout<<arr[sr][i]<<" ";

	}
	sr++;

	// last col
	for(int j=sr;j<=er;j++){
		cout<<arr[j][ec]<<" ";
	}
	ec--;

	// last row
	if(sr<=er){
	for(int k=ec;k>=sc;k--){
		cout<<arr[er][k]<<" ";
	}
	er--;
}

// ist col
	if(sc<=ec){
		for(int l=er;l>=sr;l--){
		cout<<arr[l][sc]<<" ";
	}
	sc++;


	}
	
}
	
}
int main(){
	// int arr[4][4]={
	// 	{1,2,13,5},
	// 	{8,9,13,14},
	// 	{6,7,18,20},
	// 	{45,47,9,51}

	// };

	// h/w non square matrix 7*3 

	int arr[4][4]={
		{1,2,13,5},
		{8,9,13,14},
		{6,7,18,20},
		{45,47,9,51}

	};
	spiralprint(arr,4,4);


	// https://careers.myntra.com/job-detail/?id=6943806002
	// https://paypal.eightfold.ai/careers/job?pid=274895521653&domain=paypal.com
	// https://nvidia.wd5.myworkdayjobs.com/NVIDIAExternalCareerSite/job/India-Pune/Software-Intern--GPU-Assemblers_JR1971440

	return 0; 
}