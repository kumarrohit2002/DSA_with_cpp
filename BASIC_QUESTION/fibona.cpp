#include<iostream>
using namespace std;
class fibo_class{
	public:
		int n;
	long long int fibo(int n){
		if(n==0){
			return 0;
		}
		else if(n==1){
			return 1;
		}
		else return fibo(n-1)+fibo(n-2);
	}
};

int main(){
	fibo_class f;
	cin>>f.n;
	for(int i=0;i<f.n;i++){
		cout<<f.fibo(i)<<" ";
	}
}
