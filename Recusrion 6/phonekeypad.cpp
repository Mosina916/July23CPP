#include<iostream>
using namespace std;
int co=0;
string arr[]={"","","ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"};
void phonekeypad(char inp[100],int i,char out[100],int j){
	if(inp[i]=='\0'){
		out[j]='\0';
		cout<<out<<endl;
		co++;
		return;
	}
	char ch=inp[i];//'2'
	int index=ch-'0';//'2'-'0'-->2
	for(int k=0;arr[index][k]!='\0';k++){
		out[j]=arr[index][k];
	phonekeypad(inp,i+1,out,j+1);

	}
}
int main(){
	char inp[100];
	char out[100];
	cin>>inp;
	phonekeypad(inp,0,out,0);
	cout<<co<<endl;
	
	return 0;
}