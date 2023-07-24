#include<iostream>
using namespace std;
int main(){

	int tr;
	cin>>tr;


	int rowno=1;
	while(rowno<=(tr+1)/2){

	// for any 1 row
	// spaces
	int sp=1;
	while(sp<=(tr+1)/2-rowno){
		cout<<' '<<'\t';
		sp=sp+1;
	}

	// stars
	int stc=1;
	while(stc<=(2*rowno)-1){
		cout<<'*'<<'\t';
		stc=stc+1;
	}

	cout<<endl;
	rowno=rowno+1;
}

// lower half

	rowno=1;
	while(rowno<=(tr-1)/2){





// for 1 row
// spaces
	int sp=1;
	while(sp<=rowno){
		cout<<' '<<'\t';
		sp=sp+1;
	}

	// stars
	int stc=1;
	while(stc<=(tr-2*rowno)){
		cout<<'*'<<'\t';
		stc=stc+1;
	}

	cout<<endl;
	rowno=rowno+1;
}




	return 0;
}