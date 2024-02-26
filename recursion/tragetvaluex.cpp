#include<iostream>
using namespace std;
bool f(int *arr,int n,int idx,int target){
    if(idx==n) return false;
    if(arr[idx]==target) return true;
    else f(arr,n,idx+1,target);
}
int main(){
    int n,x;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"Enter your target: ";
    cin>>x;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<f(arr,n,0,x);
    return 0;
}