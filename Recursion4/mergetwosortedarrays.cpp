#include<iostream>
using namespace std;
void mergetwosortedarrays(int *arr1,int m,int *arr2,int n){
	int temp[10000];
	int i=0,j=0,k=0;
	while(i<=m-1 and j<=n-1){
		if(arr1[i]<arr2[j]){
			temp[k++]=arr1[i++];
			// i++;
			// k++;
		}
		else{
			temp[k++]=arr2[j++];

		}
	}

	while(i<=m-1){
		temp[k++]=arr1[i++];

	}

	while(j<=n-1){
		temp[k++]=arr2[j++];
	}


	// t<emp array print
	for (int i = 0; i<k ; ++i)
	{
		cout<<temp[i]<<" ";
	}

	cout<<endl;
	

}
int main(){
	int arr1[]={3,5,9,12,16};
	int m=sizeof(arr1)/sizeof(int);
	int arr2[]={1,2,6,8};
	int n=sizeof(arr2)/sizeof(int);

	mergetwosortedarrays(arr1,m,arr2,n);


	return 0;
}