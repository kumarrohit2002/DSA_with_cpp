#include<iostream>
#include<string>
#include<stack>
using namespace std;

stack<char> reversePolishNotation(string str){
    stack<char> st,temp;
    int n=str.length();
    for(int i=0;i<n;i++){
        if(isdigit(str[i])){
            st.push(str[i]);
        }
        if(str[i]=='*' || str[i]=='+' || str[i]=='-' || str[i]=='/'){
            temp.push(str[i]);
        }
    }
        while(!temp.empty()){
            // cout<<"temp:: top: "<<temp.top();
            st.push(temp.top());
            temp.pop();
        }
    return st;
}

int main(){
    string  str;
    cin>>str;
    stack<char> st;
    st=reversePolishNotation(str);
    while(!st.empty()){
        cout<<st.top();
        st.pop();
    }

    return 0;
}