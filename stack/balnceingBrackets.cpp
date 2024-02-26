#include<iostream>
#include<string>
#include<stack>
using namespace std;
bool isvalid(string s){
    stack<char> st;
    for(int i=0;i<s.size();i++){
        char ch=s[i];
        if(ch=='(' || ch=='[' || ch=='{'){
            st.push(ch);
        }
        else{
            if(ch==')' && not st.empty() && st.top()=='('){
                st.pop();
            }
            else if(ch=='}' && not st.empty() && st.top()=='{'){
                st.pop();
            }
            else if(ch==']' && not st.empty() && st.top()=='['){
                st.pop();
            }
            // else{
            //     return false;
            // }
        }
    }
    return st.empty();
}
int main(){
    string s;
    cout<<"Enter the brackets"<<endl;
    cin>>s;
    cout<<isvalid(s);
    return 0;
}