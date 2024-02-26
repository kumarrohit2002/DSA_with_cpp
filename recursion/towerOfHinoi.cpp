#include<iostream>
using namespace std;

void toh(int n,char a,char c,char b){
    if(n==0) return;
    toh(n-1,a,b,c);
    cout<<"disk "<<n<<" move from "<<a<<" to "<<c<<endl;
    toh(n-1,b,c,a);
    return;
}

int main(){
    int n;
    cin>>n;
    toh(n,'A','C','B');
    return 0;
}