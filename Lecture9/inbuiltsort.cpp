#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int arr[100];
	 int n;
	 cin>>n;//5
	 for (int i = 0; i <n; i++)
	 {
	 	cin>>arr[i];//5 4 3 2 1
	 }

	// sort(arrayname,arrayname+noofele);

	 sort(arr,arr+n);

	
	// 1 2 3 4 5
	 // print

	 for(int i=0;i<n;i++){
	 	cout<<arr[i]<<" ";

	 }

	 cout<<endl;
	 




	return 0;
}