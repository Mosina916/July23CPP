#include<iostream>
using namespace std;
int minstepsto1(int n){
	if(n==1){
		return 0;
	}

	int x=INT_MAX,y=INT_MAX,z=INT_MAX;

	x=minstepsto1(n-1);
	if(n%2==0){
		y=minstepsto1(n/2);
	}
	if(n%3==0){
		z=minstepsto1(n/3);
	}
	return min(x,min(y,z))+1;

}

int minstepsto1td(int n,int *arr){
	if(n==1){
		return arr[n]=0;
	}
	if(arr[n]!=-1){
		return arr[n];
	}
	int x=INT_MAX,y=INT_MAX,z=INT_MAX;

	x=minstepsto1td(n-1,arr);
	if(n%2==0){
		y=minstepsto1td(n/2,arr);
	}
	if(n%3==0){
		z=minstepsto1td(n/3,arr);
	}
	return arr[n]=min(x,min(y,z))+1;

}

int bottomup(int n){
	int *arr=new int[n+1];
	arr[1]=0;

	for(int i=2;i<=n;i++){
		int x=INT_MAX,y=INT_MAX,z=INT_MAX;
	x=arr[i-1];//0
	if(i%2==0){
		y=arr[i/2];//0
	}
	if(i%3==0){
		z=arr[i/3];
	}

	arr[i]=min(x,min(y,z))+1;

	}

	for (int i = 0; i <=n; ++i)
	{
		cout<<arr[i]<<" ";
	}

	cout<<endl;


	return arr[n];
	
}
int main(){
	int n;
	cin>>n;//10

	cout<<minstepsto1(n)<<endl;
	 // memset(arr, -1, sizeof(arr)); 

	int *arr=new int[n+1];

	for (int i = 0; i <=n; ++i)
	{
		arr[i]=-1;
	}

	cout<<minstepsto1td(n,arr)<<endl;

	for (int i = 0; i <=n; ++i)
	{
		cout<<arr[i]<<" ";
	}

	cout<<endl;


	cout<<bottomup(n)<<endl;

	




	

	return 0;
}