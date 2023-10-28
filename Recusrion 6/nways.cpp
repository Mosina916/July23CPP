#include<iostream>
using namespace std;
int nwaysingrid(int x,int y){
	// base case
	if(x<0 ||y<0){
		return 0;
	}
	if(x==0 and y==0){
		return 1;
	}

	// rec case 
	return nwaysingrid(x-1,y)+nwaysingrid(x,y-1);
	
}
int main(){
	int x,y;
	cin>>x>>y;
	cout<<nwaysingrid(x,y)<<endl;
	

	return 0;
}