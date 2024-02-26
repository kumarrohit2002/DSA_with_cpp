#include<iostream>
#include<stack>
using namespace std;

void insertInBottom(stack<int> &s,int d){
    if(s.empty()){
        s.push(d);
        return;
    }
    int x=s.top();
    s.pop();
    insertInBottom(s,d);
    s.push(x);
    return;
}

void reverse(stack<int> &s){
    if(s.empty()) return;
    int x=s.top();
    s.pop();
    reverse(s);
    insertInBottom(s,x);
    return;
}

int main(){
    stack<int> s;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        s.push(x);
    }
    reverse(s);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}
