#include<iostream>
using namespace std;
int main(){
    int arr[5]={3,6,8,9,4};
    int n=5;
    for(int i=0;i<n-1;i++){
        int min_index=i;
        for(int j=i+1;j<n;j++){
            if(arr[min_index]>arr[j]){
                min_index=j;
            }
        }
        if(arr[i]!=arr[min_index]) swap(arr[i],arr[min_index]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
