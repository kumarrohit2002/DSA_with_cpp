#include<iostream>
using namespace std;
int f(int i,int j ,int m,int n){
    //base case.............
    if(i==n-1 && j==m-1) return 1;
    if(i>=n ||j>=m) return 0;
    //self work......................
    return f(i,j+1,m,n)+f(i+1,j,m,n);
}

int main(){
    cout<<f(0,0,3,3);
    return 0;
}