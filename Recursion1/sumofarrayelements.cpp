#include<iostream>
using namespace std;
int sumofarraele(int arr[],int n){
	// base case
	if(n==0){
		return 0;
	}


	// rec case
	return sumofarraele(arr,n-1)+arr[n-1];
}

int main(){
	int arr[]={3,4,5,1,2};
	int n=sizeof(arr)/sizeof(int);
	cout<<sumofarraele(arr,n)<<endl;

	
	https://www.linkedin.com/posts/gopinath2018_hiring-hiring-hiring-qualification-activity-7113824158723035136-J4Kf?utm_source=share&utm_medium=member_desktop
	https://www.google.com/about/careers/applications/jobs/results/129296660871160518-application-engineering-intern/
	https://app.pyjamahr.com/careers?company=Idealmet%20Technologies&job_id=57596&company_uuid=50C816C4B4&source=LINKEDIN&apply_now=true
	https://www.linkedin.com/posts/narvadesh-tripathi-91030760_freshers-hiring-referral-activity-7113755378609233920-bVVT?utm_source=share&utm_medium=member_desktop
	



	
	return 0;
}