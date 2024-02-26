#include<iostream>
using namespace std;
int main(){
    int *i,*p,*r,*t;
    // i=new int(12);
    // p=new int(30);
    // r=new int(20);
    // t=new int(4);
    cin>>*i>>*p>>*r>>*t;
    
//    si=(p*r*t)/100;
    int *si=new int((*p**r**t)/100);
    cout<<*si;
    delete i,p,r,t,si;
}