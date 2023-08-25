#include<iostream>
using namespace std;
int main(){
	// SSSNEEEW
	int x=0,y=0;
	char ch;
	// cin>>ch;//S
	ch=cin.get();

	while(ch!='\n'){
		

	if(ch=='S'){
		y--;//0 -1

	}
	else if(ch=='N'){
		y++;
	}
	else if(ch=='E'){
		x++;
	}
	else{
		x--;
	}

	// cin>>ch;
	ch=cin.get();

	}

	// cout<<x<<" "<<y<<endl;
	if(x>=0 and y>=0){
		// ist quad
		for(int i=1;i<=x;i++){
			cout<<'E';
		}

		for(int i=1;i<=y;i++){
			cout<<'N';
		}

	}
	else if(x<=0 and y>=0){
		// 2nd quad
		for(int i=1;i<=y;i++){
			cout<<'N';
		}
		for(int i=1;i<=abs(x);i++){
			cout<<'W';
		}

	}
	else if(x<=0 and y<=0){
		// 3rd quad
		for(int i=1;i<=abs(y);i++){
			cout<<'S';
		}
		for(int i=1;i<=abs(x);i++){
			cout<<'W';
		}

	}
	else{
		// 4th quad
		for(int i=1;i<=x;i++){
			cout<<'E';
		}
		for(int i=1;i<=abs(y);i++){
			cout<<'S';
		}



	}

	cout<<endl;
	





	return 0;
}