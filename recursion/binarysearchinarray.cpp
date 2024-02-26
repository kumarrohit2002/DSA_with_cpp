#include<iostream>
#include<vector>
using namespace std;
int binarysearch(vector<int> &v,int first,int last,int target){
    int mid=(first+last)/2;
    if(v[mid]==target) return mid;
    else if(v[mid]<target) return binarysearch(v,mid+1,last,target);
    else return binarysearch(v,first,mid-1,target);
    return -1;
}
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    vector<int> v(n);
    for (int i=0 ;i <v.size();++i){
        cin>>v[i];
    }
    int target;
    cout<<"enter the target element: ";
    cin>>target;
    cout<<binarysearch(v,0,n-1,target);
}