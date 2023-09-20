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


void rotate(char arr[1000],int n){
	int k=lengthofarr(arr);//12
	int m=lengthofarr(arr);//12

	int j=k;
	while(j>=0){
		arr[j+n]=arr[j];
		j--;

	}
	// ckscodingblo\0ks

	int s=0;
	int p=k;

	for(int l=1;l<=n;l++){
	arr[s]=arr[p];
	s++;
	p++;
}


arr[k]='\0';

}

bool permutatuion(char arr1[1000],char arr2[1000]){
	int l1=lengthofarr(arr1);//8
	int l2=lengthofarr(arr2);//9
	if(l1!=l2){
		return false;
	}
	else{
		int freq1[26]={0};
		// abccdzyy\0-->arr1
		for(int i=0;arr1[i]!='\0';i++){
			char ch=arr1[i];//'b'
		int index=ch-'a';//1
		freq1[index]++;

		}


		int freq2[26]={0};
		// abccdzyy\0-->arr1
		for(int i=0;arr2[i]!='\0';i++){
			char ch=arr2[i];//'b'
		int index=ch-'a';//1
		freq2[index]++;

		}

		for(int k=0;k<26;k++){
			if(freq1[k]!=freq2[k]){
			return false;
		}

		}

		return true;
		
	}

}
int main(){
	char arr1[1000];
	cin.getline(arr1,1000);//"abccdzyy"//8
	char arr2[1000];
	cin.getline(arr2,1000);//"ccydzyab"//8

	if(permutatuion(arr1,arr2)==true){
		cout<<"permutation"<<endl;
	}
	else{
		cout<<"not permutation"<<endl;
	}





	

	

	return 0;
}