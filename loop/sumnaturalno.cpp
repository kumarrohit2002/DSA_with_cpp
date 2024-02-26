#include<iostream>
using namespace std;
int main(){                          //sum of n natural number........
    int i=0,n;
    int sum=0;
    cout<<"Enter the number: ";
    cin>>n;
    while(i<=n){
        sum=sum+i;
        i++;
    }
    cout<<sum;
    return 0;
}