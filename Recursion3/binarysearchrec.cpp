#include<iostream>
using namespace std;
int binarysearch(int *arr,int s,int e,int key){
	// base case
	if(s>e){
		return -1;
	}
	// rec case
	int mid=(s+e)/2;//2
	if(arr[mid]==key){
		return mid;

	}
	else if(arr[mid]<key){
		return binarysearch(arr,mid+1,e,key);
	}
	else{
		return binarysearch(arr,s,mid-1,key);
	}

}
int main(){
	int arr[]={2,4,5,7,8,10};
	int n=sizeof(arr)/sizeof(int);
	int key;
	cin>>key;
	int x=binarysearch(arr,0,n-1,key);
	if(x==-1){
		cout<<"key is not present"<<endl;
	}
	else{
		cout<<key<<" is present at index "<<x<<endl;
	}
	return 0;
}