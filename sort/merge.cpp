#include<iostream>
using namespace std;

void merge(int arr[],int left,int mid,int right){
    int an=mid-left+1;
    int bn=right-mid;
    int a[an],b[bn];
    for(int i=0;i<an;i++){
        a[i]=arr[left+i];
    }
    for(int j=0;j<bn;j++){
        b[j]=arr[mid+1+j];
    }
    int i=0;
    int j=0;
    int k=left;
    while(i<an && j<bn){
        if(a[i]<b[j]){
            arr[k++]=a[i++];
        }
        else{
            arr[k++]=b[j++];
        }
    }
    while(i<an){
        arr[k++]=a[i++];
    }
    while(j<bn){
        arr[k++]=b[j++];
    }
}

void mergesort(int arr[],int left,int right){
    if(left>=right) return;
    int mid=(left+right)/2;
    mergesort(arr,left,mid);
    mergesort(arr,mid+1,right);
    merge(arr,left,mid,right);
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    mergesort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}