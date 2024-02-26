#include<iostream>
using namespace std;
int f(int *arr,int idx,int n){
    if(idx==n-1) return arr[idx];
    return max(arr[idx],f(arr,idx+1,n));
}
int main(){
    int n=5;
    int arr[]={5,20,23,45,6};
    int maxmimum=f(arr,0,n);
    cout<<maxmimum;
    return 0;
}