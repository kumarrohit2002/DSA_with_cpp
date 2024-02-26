#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int brr[n];
    int k=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]%2==0){ 
            brr[k]=arr[i];
            k++;
            }
    }
    for(int i=0;i<n;i++){
        if(arr[i]%2==1){
            brr[k]=arr[i];
            k++;
        }
    }
    for(int i=0;i<n;i++){
        cout<<brr[i]<<" ";
    }
    
    return 0;
}