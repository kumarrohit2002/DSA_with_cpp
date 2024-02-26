#include<iostream>
using namespace std;
int f(int n){
    if(n>=0 && n<=9) return n;    // base case......
    return (n%10)+f(n/10);
}
int main(){
    int n;
    cout<<"Enter the n: ";
    cin>>n;
    int sum=f(n);
    cout<<"sum of digit is:"<<sum;
    return 0;
}