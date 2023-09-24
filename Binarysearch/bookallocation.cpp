#include<iostream>
using namespace std;
bool kyamidjitnicapacitysefinishhoge(int books[100000],int ts,int tb,int capacity){
	int student=1;
	int currentpages=0;
	for(int i=0;i<tb;i++){
		if(capacity-books[i]-currentpages<0){
			student++;
			currentpages=0;
			if(student>ts){
				return false;
			}
			i--;

	}
	else{
		currentpages=currentpages+books[i];
	}

	}


	return true;
	



}

int main(){
	int tb,ts;
	cin>>tb>>ts;
	int books[100000];
	int count=0;
	for (int i = 0; i <tb; ++i)
	{
		cin>>books[i];
		count+=books[i];
	}

	int s=books[tb-1];
	int e=count;
	int ans=books[tb-1];
	while(s<=e){
		int mid=(s+e)/2;
	if(kyamidjitnicapacitysefinishhoge(books,ts,tb,mid)){
		ans=mid;
		e=mid-1;

	}
	else{
		s=mid+1;
	}	


	}

	cout<<ans<<endl;
	
	return 0;
}