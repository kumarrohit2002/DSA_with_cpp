#include<iostream>
#include<vector>
using namespace std;
void merge(int arr[],int l,int mid,int h){
    int an=mid -l+1;
    int bn=h-mid;
    //creat 2 temp arrays
    int a[an];
    int b[bn];
    for(int i=0;i<an;i++){
        a[i]=arr[l+i];
    }
    for(int j=0;j<bn;j++){
        b[j]=arr[mid+1+j];
    }
    int i=0;
    int j=0;
    int k=l;
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


void mergesort(int arr[],int l,int h){
    //base case.............
    if(l>=h) return;
    int mid=(l+h)/2;
    mergesort(arr,l,mid);
    mergesort(arr,mid+1,h);
    merge(arr,l,mid,h);
}

int main(){
    int arr[]={2,1,4,3,7,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    mergesort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}