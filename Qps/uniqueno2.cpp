#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[10000];
	int ans=0;
	int no;
	for (int i = 0; i <n; ++i)
	{
		cin>>no;
		ans=ans^no;
		arr[i]=no;
	}

	// ans-->26
	int temp2=ans;//26

	int pos=1;

	while(1){
		if((ans&1)==1){
		break;

	}
	ans=ans>>1;
	pos++;

	}
	// pos-->2

	int mask=(1<<(pos-1));//2-->10
	int temp=0;

	for(int i=0;i<n;i++){
		if((arr[i]&mask)>0){
		// pos pe 1 hai
		temp=temp^arr[i];//6^-->10
	}

	}

	// temp-->10

	int sno=temp^temp2;//16


	cout<<min(temp,sno)<<" "<<max(temp,sno)<<endl;

	

	






	return 0;
}