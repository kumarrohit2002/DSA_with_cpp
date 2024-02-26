#include<iostream>
using namespace std;
int f(int n){
    if(n==1) return 1;
    return n*f(n-1); 
}
int main(){
    int n;
    cout<<"enter the n of factorial: ";
    cin>>n;
    int fact=f(n);
    cout<<fact<<endl;
    return 0;
}