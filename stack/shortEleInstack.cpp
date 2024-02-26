#include<iostream>
#include<stack>
using namespace std;

void sorted(stack<int> &s,int num){
    if(s.empty() || (!s.empty() && s.top() <= num)){
        s.push(num);
        return;
    }
    int n=s.top();
    s.pop();
    sorted(s,num);
    s.push(n);
}

void sort(stack<int> &s){
    if(s.empty()) return;
    int x=s.top();
    s.pop();
    sort(s);
    sorted(s,x);
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
    sort(s);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}
