#include<iostream>
using namespace std;
int main(){
	int tr;
	cin>>tr;


	int row=1;
	while(row<=tr-1){




	// for any row

	// star 
	int st=1;
	int no=1;
	while(st<=row){
		cout<<no;
		st=st+1;
		no=no+1;
	}


	// space
	int sp=1;
	while(sp<=(2*tr)-1-(2*row)){
		cout<<' ';
		sp=sp+1;
	}

	// sta
	int noo=row;
	int stt=1;
	while(stt<=row){
		cout<<noo;
		noo=noo-1;
		stt=stt+1;
	}

	cout<<endl;
	row=row+1;

}

// last row
// int c=1;
// while(c<=(2*tr)-1){
// 	cout<<'*';
// 	c=c+1;
// }

// cout<<endl;

int c=1;
int nooo=1;
while(c<=tr){
	cout<<nooo;
	nooo=nooo+1;
	c=c+1;
}


int noooo=tr-1;
c=1;
while(c<=tr-1){
	cout<<noooo;
	noooo=noooo-1;
	c=c+1;
}

cout<<endl;


	



	return 0;
}