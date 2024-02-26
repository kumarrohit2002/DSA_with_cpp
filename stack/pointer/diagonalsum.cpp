#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array n x n: ";
    cin>>n;
    int arr[n][n];
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
            if(i==j) sum+=*(*(arr+i)+i);
        }
    }
    cout<<sum;
    return 0;
}