#include<iostream>
using namespace std;
int main(){
	// int arr[]={1,2,3,4,5};
	// cout<<arr<<endl;

	// int x=10;
	// cout<<&x<<endl;

	// char ch='A';
	// cout<<ch<<endl;

	// cout<<(void*)&ch<<endl;



	// char arr[]={'A','B','C','D'};

	// char arr[]={'A','B','C','D','\0'};
	// char arr[5]={'A','B','C','D','\0'};

	// char arr[5]="ABCD";
	// char arr[]="ABCD";
	// cout<<arr<<endl;\


	// int arr[]={1,2,3,4};
	// int n=sizeof(arr)/sizeof(int);
	// for(int i=0;i<n;i++){
	// 	cout<<arr[i]<<" ";

	// }

	// cout<<endl;
	// cout<<arr


	// char arr[5]="ABCD";

	// cout<<arr<<endl;
	// for(int i=0;i<=3;i++){
	// 	cout<<arr[i]<<" ";
	// }

	// cout<<endl;

	// int arr[1000];
	// int n;
	// cin>>n;
	// for (int i = 0; i <n; ++i)
	// {
	// 	cin>>arr[i];
	// }

	// cin>>arr;//wrong


	// char arr[100];
	// cin>>arr;
	// cin.getline(arrayname,arraysize,delimiter);
	// cin.getline(arr,100);
	// cin.getline(arr,100,'$');
	// cout<<arr<<endl;

	// char arr[100];


	// int arr[1000];

	// cin.getline(arr,1000);
	// int n;
	// cin>>n;





	char arr[100];
	int i=0;
	char ch;
	ch=cin.get();
	while(ch!='\n'){
		arr[i]=ch;
		i++;
		ch=cin.get();

	}

	arr[i]='\0';

	cout<<arr<<endl;




















	return 0;
}