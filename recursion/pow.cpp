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
int main(){
    int a,b;
    cout<<"Enter the a,b: ";
    cin>>a>>b;
    int p=pow(a,b);
    cout<<p;
    return 0;
}