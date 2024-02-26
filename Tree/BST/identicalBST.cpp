#include<iostream>
#include<vector>
using namespace std;

bool ishelp(vector<int> &v1,vector<int> &v2,int a1,int a2,int min,int max){
    int i;
    for(i=a1;i<v1.size();i++){
        if(v1[i] > min && v1[i] <max) break; 
    }
    int j;
    for(j=a2;j<v2.size();j++){
        if(v2[j] > min && v2[j] < max) break;
    }
    if(i==v1.size() && j==v2.size()) return true;
    if((i==v1.size() && j!=v2.size())  && (i!=v1.size() && j==v2.size())) return false;
    if(v1[i]!=v2[j]) return false;
    return ishelp(v1,v2,a1+1,a2+1,min,v1[i]) && ishelp(v1,v2,a1+1,a2+1,v1[i],max);
}

bool cheackIdenticalBST(vector<int> &v1,vector<int> &v2){
    return ishelp(v1,v2,0,0,INT16_MIN,INT16_MAX);
}

int main(){
    vector<int> v1;
    vector<int> v2;
    int n;
    cout<<"Enter size of Array: ";
    cin>>n;
    cout<<"Enter 1st Array elements:\n";
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        v1.push_back(ele);
    }
    cout<<"Enter 2nd Array elements:\n";
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        v2.push_back(ele);
    }
    cout<<"cheackIdenticalBST: "<<cheackIdenticalBST(v1,v2);
    return 0;
}