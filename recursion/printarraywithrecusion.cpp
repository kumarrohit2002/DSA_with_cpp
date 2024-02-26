#include<iostream>
using namespace std;
void f(int *arr,int idx,int n){
    //base case
    if(idx==n) return;
    //self work
    cout<<arr[idx]<<" ";
    //Assume that
    f(arr,idx+1,n);
}
int main(){
    int n=5;
    int arr[]={6,4,3,7,5};
    f(arr,0,n);
    return 0;
}