#include<iostream>
using namespace std;
int lengthofarr(char arr[100]){
	int count=0;
	int i=0;

	while(arr[i]!='\0'){
		count++;
		i++;

	}

	return count;
	
}


void copy(char arr1[1000],char arr2[1000]){
	int i=0;
	int j=0;

	while(i<=lengthofarr(arr1)){
		arr2[j]=arr1[i];
	i++;
	j++;

	}
	

}
int main(){
	int n;
	cin>>n;//4
	if(n==0){
		return 0;
	}
	// cin.ignore();


	char arr1[1000];
	cin.getline(arr1,1000);//board

	char abhitakkilar[1000];
	copy(arr1,abhitakkilar);
	int abhtkmaxlen=lengthofarr(arr1);//5


	for(int i=1;i<=n-1;i++){
			cin.getline(arr1,1000);//codingblocks
	if(lengthofarr(arr1)>abhtkmaxlen){
		copy(arr1,abhitakkilar);
		abhtkmaxlen=lengthofarr(arr1);
	}

	}


	cout<<"largest array is "<<abhitakkilar<<endl;
	cout<<"largest array is "<<abhtkmaxlen<<endl;




	

	

	return 0;
}