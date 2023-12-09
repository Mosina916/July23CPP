#include<iostream>
#include<unordered_map>
#include<map>
using namespace std;
int main(){

	// unordered_map<key,value> name;
	// unordered_map<string,string> h;
	unordered_map<int,int> arr;
	// map<string,string> h;
	// h["mango"]="yellow";

	// h["banana"]="yellow";
	// h["grapes"]="green";

	arr[0]=90;
	arr[1]=54;
	arr[2]=43;

	// unordered_map<string,pair<string,int> > h;
	// pair<string,int> p1("yellow",30);
	// h["mango"]=p1;

	// pair<string,int> p2("green",80);
	// h["grapes"]=p2;
	// h.insert{("mango", p1 )};
	

	// h.insert(make_pair("ye"))
	// mp.insert({ "mango", "yellow" });


	for(auto x:arr){
		cout<<x.first<<"--> "<<x.second<<endl;
	}

	// for(auto x:h){
	// 	cout<<x.first<<"--> "<<x.second.first<<" "<<x.second.second<<endl;
	// }




	

	return 0;
}