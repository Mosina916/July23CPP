#include<iostream>
using namespace std;
int main(){
	int arr[100];
	 int n;
	 cin>>n;//5
	 for (int i = 0; i <n; ++i)
	 {
	 	cin>>arr[i];//6 3 2 7 11
	 }
	 int atklarget=arr[0];//6

	 for(int i=1;i<n;i++){
	 	if(arr[i]>atklarget){
	 	atklarget=arr[i];

	 }

	 }

	 cout<<atklarget<<endl;
	 



	return 0;
}