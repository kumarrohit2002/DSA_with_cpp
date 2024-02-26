#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    int *ptr;
    ptr=arr;
    int sum=0;
    cout<<"Enter the element of array: "<<endl;
    for(int i=1;i<=n;i++){
        cin>>*(ptr+i);
        sum=sum+ *(ptr+i);
    }
    cout<<"sum is "<<sum;

    return 0;
}