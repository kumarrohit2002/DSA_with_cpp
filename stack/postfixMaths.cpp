#include<iostream>
#include<string>
#include<stack>
using namespace std;


int fun(string s){
    stack<int> st;
    int n = s.length();
    for(int i=0;i<n;i++){
        if(s[i]==' ') continue;
        if(isdigit(s[i])){
            st.push(s[i]-'0');
        }
        else{
            int v2=st.top();
            st.pop();
            int v1=st.top();
            st.pop();
            if(s[i]=='*'){
                st.push(v1*v2);
            }
            else if(s[i]=='+'){
                st.push(v1+v2);
            }
            else if(s[i]=='-'){
                st.push(v2-v1);
            }
            else if(s[i]=='/'){
                st.push(v2/v1);
            }
            else return 0;
        }
    }  
    return st.top();  
}

int main(){
    string exp;
    getline(cin,exp);
    cout<<fun(exp);
    return 0;
}