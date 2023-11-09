 #include<iostream>
using namespace std;
int c=0;
class noida{

	public:
	string name;
	int price;
	int seats;

	noida(){
		c++;
		// cout<<"hello"<<endl;

	}
	noida(string name,int p,int s){
		this->name=name;
		price=p;
		seats=s;

	}
	~noida(){

		cout<<"hii"<<endl;

	}

	// member function

	// void print(){
	void getter(){
		cout<<name<<endl;
		cout<<price<<endl;
		cout<<seats<<endl;
	}
	void setter(){
		cin>>name;
		cin>>price;
		cin>>seats;

	}
};
int main(){
	// noida x;
	// cin>>x.name>>x.price>>x.seats;
	// cout<<x.name<<endl<<x.price<<endl<<x.seats<<endl;
	// noida y;

	noida z("abc",300,6);
	z.getter();
	noida y;
	y.setter();
	y.getter();

	// cout<<z.name<<endl<<z.price<<endl<<z.seats<<endl;

	// noida x[1000];
	// // cout<<c<<endl;
	// int n;
	// cin>>n;
	// for(int i=0;i<n;i++){
	// 	cin>>x[i].name>>x[i].price>>x[i].seats;
	// } 
	// for(int i=0;i<n;i++){
	// 	cout<<x[i].name<<endl<<x[i].price<<endl<<x[i].seats<<endl;
	// } 


	return 0;
}