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

int main(){
    stack<int> s;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        s.push(x);
    }
    insertInBottom(s,100);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}
