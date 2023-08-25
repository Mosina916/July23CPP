#include<iostream>
using namespace std;
int main(){
	
	int arr[100];
	int ts;
	cin>>ts;//5
	// 4 5 3 8 1
	for(int i=0;i<=ts-1;i++){
		cin>>arr[i];
	}


	for(int i=ts-1;i>=0;i--){
		cout<<arr[i]<<" ";
	}

	cout<<endl;



	return 0;
}