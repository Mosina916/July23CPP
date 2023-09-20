#include<iostream>
using namespace std;
int main(){
	// datatype nameofarra[rows][cols];
	// int arr[3][4];
	int arr[100][100];
	int r,c;
	cin>>r>>c;//3 4

	// arr[0][0]=10;
	// arr[0][1]=20;
	// arr[0][2]=30;
	// arr[0][3]=40;
// row no 1 -->0

	// cin>>arr[0][0];
	// cin>>arr[0][1];
	// cin>>arr[0][2];
	// cin>>arr[0][3];

	// for(int j=0;j<=3;j++){
	// 	cin>>arr[0][j];
	// }


	// row no 2 -->1

	// for(int j=0;j<=3;j++){
	// 	cin>>arr[1][j];
	// }

	// row no =3 -->2

	// for(int j=0;j<=3;j++){
	// 	cin>>arr[2][j];
	// }

// input 
	for(int i=0;i<=r-1;i++){

	for(int j=0;j<=c-1;j++){
		cin>>arr[i][j];
	}

}


// output
	for(int i=0;i<=r-1;i++){

	for(int j=0;j<=c-1;j++){
		cout<<arr[i][j]<<" ";
	}

	cout<<endl;

}


	



	
	
	return 0;
}