#include<iostream>
using namespace std;

int main(){
	//sma
	// int arr[100];

	int *ptr=new int[100];
	int *n=new int;
	cin>>*n;
	// int n;
	// cin>>n;


	for(int i=0;i<*n;i++){
		cin>>ptr[i];
	}

	for(int i=0;i<*n;i++){
		cout<<ptr[i]<<" ";
	}

	cout<<endl;
	// delete[]pointername;
	delete[] ptr;
	ptr=NULL;



	
	
	return 0;
}