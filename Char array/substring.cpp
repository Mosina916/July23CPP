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

void substring(char arr1[1000]){
	for(int i=0;i<=lengthofarr(arr1)-1;i++){
	for(int j=i;j<=lengthofarr(arr1)-1;j++){
		for(int k=i;k<=j;k++){
		cout<<arr1[k];
	}

	cout<<endl;

	}
}
}


int main(){
	char arr1[1000];
	cin.getline(arr1,1000);//"abcd"

	for(int i=0;i<=lengthofarr(arr1)-1;i++){
	for(int j=i;j<=lengthofarr(arr1)-1;j++){
		for(int k=i;k<=j;k++){
		cout<<arr1[k];
	}

	cout<<endl;

	}
}
	// substring(arr1);
	
	return 0;
}