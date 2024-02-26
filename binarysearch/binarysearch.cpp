#include<iostream>
using namespace std;
int binarysearch(int arr[],int f,int l,int key){
    int mid=(f+l)/2;
    if(arr[mid]==key) return mid;
    else if(key>arr[mid]) return binarysearch(arr,mid+1,l,key);
    else return binarysearch(arr,f,mid-1,key);
    return -1;
}
int main(){
    int arr[8]={10,20,30,40,50,60,70,80};
    int key;
    cout<<"enter the key: ";
    cin>>key;
    int index=binarysearch(arr,0,8,key);
    cout<<endl<<index;

    return 0;
}