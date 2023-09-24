#include<iostream>
using namespace std;
bool binarysearch(int arr[100],int n,int key){
	int s=0;
	int e=n-1;

	while(s<=e){
	int mid=(s+e)/2;

	if(arr[mid]==key){
		cout<<"key is present at index "<<mid<<endl;
		return true;
	}
	else if(arr[mid]>key){
		e=mid-1;
	}
	else{
		s=mid+1;
	}

}

return false;

}
int main(){
	int n;
	cin>>n;
	int arr[1000];
	for (int i = 0; i <n; ++i)
	{
		cin>>arr[i];
	}

	int key;
	cin>>key;

	if(binarysearch(arr,n,key)==false){
		cout<<-1<<endl;
	}


	return 0;
}