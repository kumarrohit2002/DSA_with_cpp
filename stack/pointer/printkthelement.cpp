#include<iostream>
using namespace std;
int main(){
    int n;
    int *esize=&n;
    cin>>*esize;
    int m;
    cin>>m;
    int arr[*esize];
    int *parr;
    parr=arr;
    cout<<"Enter the element: "<<endl;
    for(int i=1;i<=*esize;i++){
        cin>>*(parr+i);
    }
    
    cout<<*(parr+m);
    return 0;
}