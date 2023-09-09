#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;//5
	int arr[10000];
	for (int i = 0; i <n; ++i)
	{
		cin>>arr[i];
	}//1 3 4 2 5
	sort(arr,arr+n);
	int target;
	cin>>target;//5


	// 1 2 3 4 5
	// 1 4


	int i=0;
	int j=n-1;
	while(i<j){

	if(arr[i]+arr[j]==target){
		cout<<arr[i]<<','<<arr[j]<<endl;
		i++;
		j--;
	}
	else if(arr[i]+arr[j]>target){
		j--;
	}
	else{
		i++;
	}


	}





	return 0;
}