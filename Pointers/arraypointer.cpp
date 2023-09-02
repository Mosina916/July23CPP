#include<iostream>
using namespace std;

// arr[i] is same as *(arr+i)
// void f(int b[],int n){
void f(int *b,int n){//int *b=ox....

	for (int i = 0; i <n; ++i)
	{
		*(b+i)=*(b+i)+90;
	}

	for (int i = 0; i < n; ++i)
	{
		cout<<*(b+i)<<" ";
	}
	cout<<endl;
}
int main(){
	int arr[]={1,3,6,2};
	int n=sizeof(arr)/sizeof(int);


	f(arr,n);
	for (int i = 0; i < n; ++i)
	{
		cout<<*(arr+i)<<" ";
	}
	cout<<endl;
	







	return 0;
}