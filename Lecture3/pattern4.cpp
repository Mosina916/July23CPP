#include<iostream>
using namespace std;
int main(){
	int tr;
	cin>>tr;  
	// rowno1
	int starc=1;
	while(starc<=tr){
		cout<<'*'<<'\t';
		starc=starc+1;
	}
	cout<<endl;


	// rowno 1 to 3
	int rowno=1;
	while(rowno<=(tr-1)/2){


	// for any 1 row
		// stars
		int st=1;
		while(st<=(tr+1)/2-rowno){
			cout<<'*'<<'\t';
			st=st+1;
		}

		// spaces
		int sp=1;
		while(sp<=(2*rowno)-1){
			cout<<' '<<'\t';
			sp=sp+1;
		}


		// stars
		st=1;
		while(st<=(tr+1)/2-rowno){
			cout<<'*'<<'\t';
			st=st+1;
		}

		cout<<endl;
		rowno=rowno+1;

	}


	// 3rd part

	rowno=1;
	while(rowno<=((tr-1)/2)-1){

	// stars

	int st=1;
	while(st<=rowno+1){
		cout<<'*'<<'\t';
		st=st+1;
	}

	// spaces
	int spac=1;
	while(spac<=(tr-2)-2*rowno){
		cout<<' '<<'\t';
		spac=spac+1;
	}

	// stars
	st=1;
	while(st<=rowno+1){
		cout<<'*'<<'\t';
		st=st+1;
	}

	cout<<endl;
	rowno=rowno+1;

}


// 4th part
int starcc=1;
	while(starcc<=tr){
		cout<<'*'<<'\t';
		starcc=starcc+1;
	}
	cout<<endl;




	




	return 0;
}