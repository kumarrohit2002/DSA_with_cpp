#include<iostream>
using namespace std;

void selectionsort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int min_idx=i;
        for(int j=i;j<n;j++){
            if(arr[min_idx]>arr[j]){
                min_idx=j;
            }
        }
        if(i!=min_idx) swap(arr[i],arr[min_idx]);
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    selectionsort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}