#include<iostream>
#include<stack>
#include<string>
using namespace std;


int cal(int v1,int v2,char ch){
    if(ch=='*') return v1*v2;
    if(ch=='/') return v1/v2;
    if(ch=='+') return v1+v2;
    return v1-v2;
}

int evaluate(string &str){
    stack<char> st;
    for(int i=0;i<str.size();i++){
        char ch=str[i];
        if(isdigit(ch)){
            st.push(ch-'0');
        }
        else{
            int v2=st.top();
            st.pop();
            int v1=st.top();
            st.pop();
            st.push(cal(v1,v2,ch));
        }
    }
    return st.top();
}

int main(){
    string s="123+-";
    cout<<evaluate(s);
    return 0;
}