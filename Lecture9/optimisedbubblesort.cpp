#include<iostream>
using namespace std;
int main(){
	int arr[100];
	 int n;
	 cin>>n;//5
	 for (int i = 0; i <n; i++)
	 {
	 	cin>>arr[i];//5 4 3 2 1
	 }

	 // 1 2 3 4 5

	 for(int step=1;step<=n-1;step++){
	 	cout<<step<<endl;
	 	bool kyaswaphuva=false;
	 	for(int i=0;i<n-step;i++){
	 		if(arr[i]>arr[i+1]){
	 			swap(arr[i],arr[i+1]);
	 			kyaswaphuva=true;
	 			
	 		}
	 	}
	 	if(kyaswaphuva==false){
	 		break;
	 	}

	 }
	
	// 1 2 3 4 5
	 // print

	 for(int i=0;i<n;i++){
	 	cout<<arr[i]<<" ";

	 }

	 cout<<endl;
	 




	return 0;
}