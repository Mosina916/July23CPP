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


	 // selection

	 for(int step=1;step<=n-1;step++){
	 	int index=step-1;
	 	int atksi=step-1;
	 	for(int i=step;i<=n-1;i++){
	 		if(arr[i]<arr[atksi]){
	 			atksi=i;
	 		}
	 	}
	 	swap(arr[index],arr[atksi]);

	 }


	  // print

	 for(int i=0;i<n;i++){
	 	cout<<arr[i]<<" ";

	 }

	 cout<<endl;
	 




	return 0;
}