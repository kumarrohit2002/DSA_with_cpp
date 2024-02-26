#include<iostream>
using namespace std;
int pow(int a,int b){
    if(b==1) return a;
    if(b%2==0){
        int result=pow(a,b/2);
        return result*result;
    }
    else{
        int result=pow(a,(b-1)/2);
        return a*result*result;
    }
}
int f(int n,int d){
    if(n==0) return 0;
    return pow(n%10,d)+f(n/10,d);
}
int main(){
    int n;
    cout<<"enter the input: ";
    cin>>n;
    int d=0;
    int k=n;
    while(k>0){
        k=k/10;
        d++;
    }
    int result=f(n,d);
    if(n==result) cout<<"YES";
    else cout<<"NO";
    return 0;
}