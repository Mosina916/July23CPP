#include<iostream>
#include<queue>
using namespace std;
bool myfun(int a,int b){//5 1
	return a>b;

}
int main()
{
	int arr[]={3,2,1,4,5};
	int n=sizeof(arr)/sizeof(int);
	// sort(arr,arr+n);
	sort(arr,arr+n,myfun);


	for (int i = 0; i <=n-1; ++i)
	{
		cout<<arr[i]<<" ";
	}

	cout<<endl;


	
	return 0;
}