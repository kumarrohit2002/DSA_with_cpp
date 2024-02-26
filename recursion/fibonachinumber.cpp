#include<iostream>
//0 1 1 2 3 5 8 13 21 ....
using namespace std;
int f(int n){
    if(n==1 || n==0) return n;
    return f(n-1)+f(n-2);
}
int main(){
    int n;
    cout<<"enter the n: ";
    cin>>n;
    int fibo=f(n);
    cout<<fibo;
    return 0;
}