#include<iostream>
using namespace std;
void f(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int a,b;
    cin>>a>>b;
    int *p=&a;
    int *q=&b;
    f(p,q);
    cout<<a<<" "<<b;
    return 0;
}