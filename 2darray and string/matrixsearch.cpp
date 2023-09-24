#include<iostream>
using namespace std;
bool staircasesearch(int arr[4][4],int r,int c,int key){
	int i=0;
	int j=c-1;

	while(i<r and j>=0){
		if(arr[i][j]==key){
			cout<<"key is present at index "<<i<<" "<<j<<endl;
			return true;
		}
		else if(arr[i][j]<key){
			i++;
		}
		else{
			j--;
		}

	}

	return false;
}
int main(){
	int arr[4][4]={
		{1,2,3,5},
		{8,9,9,14},
		{16,17,18,20},
		{45,47,49,51}

	};
	int key;
	cin>>key;

	if(staircasesearch(arr,4,4,key)==false){
		cout<<"key is not present"<<endl;
	}


	return 0; 
}