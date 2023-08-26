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
	 int key;
	 cin>>key;//7
	 int i;
	 for(i=0;i<n;i++){
	 	if(arr[i]==key){
	 	cout<<"key is present at index"<<i<<endl;
	 	break;

	 }

	 }
	 if(i==n){
	 	cout<<"key is not present"<<endl;
	 }
	 


	 


	return 0;
}