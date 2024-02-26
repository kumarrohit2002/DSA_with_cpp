#include<iostream>
#include<vector>
using namespace std;
void f(vector<int> &v){
    int n=v.size();
    for(int i=0;i<n-1;i++){
        bool falg=false;
        for(int j=0;j<n-i-1;j++){
            if(v[j]>v[j+1]){
                swap(v[j],v[j+1]);
                falg=true;
            } 
        }
        if(!falg) break;
    }
    return;
}
int main(){
    int n;
    cout<<"enter the size of array: ";
    cin>>n;
    vector<int> v(n);
    cout<<"enter the array element: "<<endl;
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }
    f(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}