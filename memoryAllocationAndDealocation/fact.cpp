#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int *p=new int(n);
    int *f=new int(1);;
    for(int i=1;i<=n;i++){
        *f=*f*i;
    }
    cout<<*f;
    delete f,p;
}