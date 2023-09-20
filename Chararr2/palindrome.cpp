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
int main(){
	// char arr[10000]="nitin";
	// char arr[10000]="abcfggggdcba";  

	char arr[100];
	cin.getline(arr,100);

	// ispalindrome(arr);

	if(ispalindrome(arr)==true){
		cout<<"yes palindrome"<<endl;
	}
	else{
		cout<<"not palindrome"<<endl;

	}


	return 0;
}