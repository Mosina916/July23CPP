#include<iostream>
using namespace std;
bool iskeypresent(int arr[3][4],int r,int c,int key){
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
		if(arr[i][j]==key){
			cout<<"key is present at index "<<i<<" "<<j<<endl;
			return true;

	}

	}

	}

	return false;
	
	

}
int main(){
	int arr[3][4]={
		{1,3,4,5},
		{6,7,2,9},
		{9,3,1,5}

	};

	int key;
	cin>>key;//7

	if(iskeypresent(arr,3,4,key)==false){
		cout<<"key is not present"<<endl;
	}

	return 0; 
}