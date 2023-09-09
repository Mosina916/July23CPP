#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;//7
	int arr[10000];
	for (int i = 0; i <n; ++i)
	{
		cin>>arr[i];
	}//2 1 4 5 3 3 6
	sort(arr,arr+n);
	int target;
	cin>>target;//8


	


	int i=0;

	while(i<n-2){
		int j=i+1;
	int k=n-1;
	while(j<k){

	if(arr[i]+arr[j]+arr[k]==target){
		cout<<arr[i]<<','<<arr[j]<<','<<arr[k]<<endl;
		j++;
		k--;
	}
	else if(arr[i]+arr[j]+arr[k]>target){
		k--;
	}
	else{
		j++;
	}


	}
	i++;

	}


	return 0;
}