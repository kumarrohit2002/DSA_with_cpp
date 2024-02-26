#include<iostream>
using namespace std;

int partation(int arr[],int first,int last){
    int pivot=arr[last];
    int i=first-1;
    int j=first;
    for(;j<last;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[last]);

    return i+1;
}

void quicksort(int arr[],int first,int last){
    if(first>=last) return;
    int pi=partation(arr,first,last);
    quicksort(arr,first,pi-1);
    quicksort(arr,pi+1,last);
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    quicksort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}





