#include<iostream>
#include<stack>
using namespace std;

void deleteEle(stack<int> &s,int i,int p){
    if(i==p) {
        s.pop();
        return;
    }
    int x=s.top();
    s.pop();
    deleteEle(s,i+1,p);
    s.push(x);
}

int main(){
    // int n;
    // cin>>n;
    stack<int> s;
    for(int i=0;i<5;i++){
        int x;
        cin>>x;
        s.push(x);
    }
    deleteEle(s,1,3);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }

    return 0;
}