#include<iostream>
using namespace std;
int main(){
	int arr[100];
	 int n;
	 cin>>n;//5
	 for (int i = 0; i <n; i++)
	 {
	 	cin>>arr[i];//4 3 1 5 2
	 }


	 // insertion sort
	 int j;
	 for(int i=1;i<=n-1;i++){
	 	int ce=arr[i];

	 for(j=i-1;j>=0;j--){
	 	if(ce<arr[j]){
	 	arr[j+1]=arr[j];
	 }
	 else{
	 	break;
	 }

	 }
	 arr[j+1]=ce;

	 }
	 
	 

	  // print

	 for(int i=0;i<n;i++){
	 	cout<<arr[i]<<" ";

	 }

	 cout<<endl;
	 




	return 0;
}