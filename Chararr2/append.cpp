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

bool ispalindrome(char arr[100]){
	int i=0;
	int j=lengthofarr(arr)-1;

	while(i<j){
		if(arr[i]==arr[j]){
		i++;
		j--;
	}
	else{
		return false;
	}


	}

	return true;

	


}


// void append(char arr1[1000],char arr2[1000]){
// 	int i=0;
// 	int j=lengthofarr(arr1);//3


// 	while(i<=lengthofarr(arr2)){
// 		arr1[j]=arr2[i];
// 	i++;
// 	j++;

// 	}
	
// }


void append(char arr1[1000],char arr2[1000]){
	int i=0;
	int j=lengthofarr(arr1);//3


	while(arr2[i]!='\0'){
		arr1[j]=arr2[i];
	i++;
	j++;

	}

	arr1[j]='\0';

	
}
int main(){
	char arr1[1000];
	cin.getline(arr1,1000);//car

	char arr2[1000];
	cin.getline(arr2,1000);//board

	append(arr1,arr2);

	cout<<arr1<<endl;

	cout<<arr2<<endl;


	return 0;
}