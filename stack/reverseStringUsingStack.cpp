#include<iostream>
#include<stack>
#include<string>
using namespace std;

void reverse(stack<char> s){
    if(s.empty()){
        return;
    }
    cout<<s.top();
    s.pop();
    reverse(s);
}

int main(){
    string s;
    stack<char> s1;
    cin>>s;
    char a;
    for(int i=0;i<s.size();i++){
        a=s[i];
        s1.push(a);
    }
    reverse(s1);
    // cout<<s[0];
}