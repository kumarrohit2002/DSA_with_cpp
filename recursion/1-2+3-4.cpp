#include<iostream>
using namespace std;
int f(int n,int &sum){
    if(n==1) return n;
    if(n%2==0) sum=sum-n+f(n-1,sum);
    else sum=sum+n+f(n-1,sum);
    return sum;

}
int main(){
    int n;
    cout<<"Enter the input n: ";
    cin>>n;
    int sum=0;
    int a=f(n,sum);
    cout<<a;
    return 0;
}