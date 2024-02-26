#include<iostream>
using namespace std;
int f(int p,int q){
    if(q==1) return p;
    return p*f(p,--q);
}
int main(){
    int p,q;
    cout<<"Enter the p and q: ";
    cin>>p>>q;
    int pow=f(p,q);
    cout<<"p^q is : "<<pow;
    return 0;
}