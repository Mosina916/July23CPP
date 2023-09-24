#include<iostream>
using namespace std;
void waveprint(int arr[4][4],int r,int c){
	for(int col=0;col<c;col++){
	if(col%2==0){
		// even col -->downward print

		for(int rn=0;rn<r;rn++){
			cout<<arr[rn][col]<<" ";

		}

	}
	else{
		// odd col -->upward print
		for(int rn=r-1;rn>=0;rn--){
			cout<<arr[rn][col]<<" ";

		}
		

	}
}


}
int main(){
	int arr[4][4]={
		{1,2,13,5},
		{8,9,13,14},
		{6,7,18,20},
		{45,47,9,51}

	};
	waveprint(arr,4,4);

	return 0; 
}