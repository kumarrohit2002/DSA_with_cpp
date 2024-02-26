#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"enter the n,m: ";
    cin>>n>>m;
    int gcd=-1;
    for(int i=0;i<m;i++){
        cout<<i<<" ";
        if(n%i==0 || m%i==0){
            cout<<20;
        }
    }
    cout<<gcd<<endl;
    return 0;
}