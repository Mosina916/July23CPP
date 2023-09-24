#include<iostream>
using namespace std;
bool amiabletoplaceallcowswithdismid(int stall[1000000],int n,int tc,int safedis){

	int cp=1;
	int prev=stall[0];
	for(int i=1;i<n;i++){
		if(stall[i]-prev>=safedis){
			cp++;
			prev=stall[i];
			if(cp>=tc){
				return true;
			}

	}

	}

	return false;
	

}

int main(){
	int n,c;
	cin>>n>>c;
	int stall[1000000];

	for (int i = 0; i < n; ++i)
	{
		cin>>stall[i];
	}

	sort(stall,stall+n);
	int s=0;
	int e=stall[n-1];
	int ans=0;

	while(s<=e){
	int mid=(s+e)/2;
	if(amiabletoplaceallcowswithdismid(stall,n,c,mid)){
		ans=mid;
		s=mid+1;
	}
	else{
		e=mid-1;
	}
}
cout<<ans<<endl;


	


	return 0;
}