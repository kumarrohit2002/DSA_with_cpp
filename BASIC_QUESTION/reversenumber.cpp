#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int *p=&n;
    int temp=0;
    while(n!=0){          //123
        temp=temp*10 + *p%10;
        n=n/10;
    }
    cout<<temp;
}