#include<iostream>
using namespace std;
int main(){
	// int arr[100][1000];
	// int arr[]={3,,4,5,2};
	// int arr[][4]={
	int arr[][4]={
		{4,3,2,5},
		{6,7,8,1},
		{8,9,0,1}
	};

	for(int i=0;i<=2;i++){

	for(int j=0;j<=3;j++){
		cout<<arr[i][j]<<" ";
	}

	cout<<endl;
}

	
	
	return 0;
}