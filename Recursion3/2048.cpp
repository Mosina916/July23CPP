#include<iostream>
using namespace std;
string arr[]={"Zero","One","Two","three","four","five","six","Seven","eight","Nine"};

// void converttorevform(int no){
// 	// base case
// 	if(no==0){
// 		return;
// 	}


// 	// rec case
// 	int ld=no%10;
// 	cout<<arr[ld]<<" ";//Eight
// 	converttorevform(no/10);

// }
void converttowordform(int no){
	// base case
	if(no==0){
		return;
	}


	// rec case
	converttowordform(no/10);
	int ld=no%10;
	cout<<arr[ld]<<" ";//Eight
	

}

int main(){
	int no;
	cin>>no;//
	converttowordform(no);
	
	
	return 0;
}