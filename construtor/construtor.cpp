#include<iostream>
#include<string>
using namespace std;
class bank{
	public:
		string c_name;
		int acc_no;
		int dob;
		int bal;
		void display(){
			cout<<"Name: "<<c_name<<endl;
			cout<<"Account number: "<<acc_no<<endl;
			cout<<"DOB: "<<dob<<endl;
			cout<<"balance: "<<bal<<endl;
		}
		bank(string s,int an,int d,int baln){
			c_name=s;
			acc_no=an;
			dob=d;
			bal=baln;
		}
		
};


int main(){
	bank x("rohit",12201517,18102002,50000);
	x.display();
	
	return 0;
}




