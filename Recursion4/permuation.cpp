#include<iostream>
using namespace std;
int co=0;
void permuationofstring(char *inp,int i){
	// base case
	if(inp[i]=='\0'){
		cout<<inp<<endl;
		co++;
		return;
	}
	// rec case
	for(int j=i;inp[j]!='\0';j++){

	swap(inp[i],inp[j]);
	permuationofstring(inp,i+1);//bc-->abc acb bac bca  cba cab
	swap(inp[i],inp[j]);
	}


}

int main(){
	char inp[100];
	cin.getline(inp,100);//abc-->3
	// abc-->abc acb bac bca cab cba legth!

	permuationofstring(inp,0);

	cout<<co<<endl;




	return 0;
}