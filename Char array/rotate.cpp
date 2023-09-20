#include<iostream>
using namespace std;
int lengthofarr(char arr[100]){
	int count=0;
	int i=0;

	while(arr[i]!='\0'){
		count++;
		i++;

	}

	return count;
	
}


void copy(char arr1[1000],char arr2[1000]){
	int i=0;
	int j=0;

	while(i<=lengthofarr(arr1)){
		arr2[j]=arr1[i];
	i++;
	j++;

	}
	

}


void rotate(char arr[1000],int n){
	int k=lengthofarr(arr);//12
	int m=lengthofarr(arr);//12

	int j=k;
	while(j>=0){
		arr[j+n]=arr[j];
		j--;

	}
	// ckscodingblo\0ks

	int s=0;
	int p=k;

	for(int l=1;l<=n;l++){
	arr[s]=arr[p];
	s++;
	p++;
}


arr[k]='\0';

	


}
int main(){
	int n;
	cin>>n;
	cin.ignore();

	char arr1[1000];
	cin.getline(arr1,1000);//codingblocks

	n=n%lengthofarr(arr1);


	rotate(arr1,n);


	cout<<arr1<<endl;


	

	

	

	return 0;
}