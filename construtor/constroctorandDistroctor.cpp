#include<iostream>
using namespace std;

class A{
	int x,z;
	public:
		A(int a,int b):x(a),z(b){
			cout<<"constructor called"<<endl;
			cout<<x<<"  "<<z<<endl;
		}
		~A(){
			cout<<"Distroctor called"<<endl;
		}
};

int main(){
	A a(10,20);
	return 0;
}
