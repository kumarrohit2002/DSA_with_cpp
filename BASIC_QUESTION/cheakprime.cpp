#include<iostream>
#include<math.h>
using namespace std;
int cheak_prime(int a){
	int c=0;
	for(int i=1;i<=a;i++){
		if(a%i==0) c=c+1;
	}
	if(c==2) cout<<a<<"\n";
}
int main(){
	for(int i=0;i<=10;i++){
		cheak_prime(i);
	}
	return 0;
}
