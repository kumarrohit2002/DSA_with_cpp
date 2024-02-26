#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter the input n: ";
    cin>>n;
    do{
        cout<<n<<" ";
        n=n-5;
    }
    while(n>=0);
    return 0;
}