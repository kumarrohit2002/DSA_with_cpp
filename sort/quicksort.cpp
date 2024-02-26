#include<iostream>
using namespace std;
int partition(int arr[],int first,int last){
    int pivot=arr[last];
    int i=first-1;
    int j=first;

    for(;j<last;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    //now i is pointing to the last element<pivot
    // correct position for pivot will be -- I+1
    swap(arr[i+1],arr[last]);
    return i+1;
}

void quicksort(int arr[],int first,int last){
    //base case...............
    if(first>=last) return;
    //recursive case...........
    int pi=partition(arr,first,last);
    quicksort(arr,first,pi-1);
    quicksort(arr,pi+1,last);
}

int main(){
    int arr[]={3,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    quicksort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}