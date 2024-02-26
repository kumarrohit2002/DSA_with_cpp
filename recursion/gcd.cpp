#include<iostream>
using namespace std;
int gcdf(int a,int b){
    if(b>a) return gcdf(b,a);
    if(b==0) return a;
    return gcdf(b,a%b);
}
int main(){
    int a,b;
    cout<<"Enter the a,b: ";
    cin>>a>>b;
    int gcd=gcdf(a,b);
    cout<<gcd;
    return 0;
}