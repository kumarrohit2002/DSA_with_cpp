#include<iostream>
#include<stack>
using namespace std;

stack<int> copystack(stack<int> &input){
        stack<int> temp;
        while(not input.empty()){
            int curr=input.top();
            temp.push(curr);
            input.pop();
        }
        stack<int> result;
        while(not temp.empty()){
            int c=temp.top();
            result.push(c);
            temp.pop();
        }
        return result;
}
int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    stack<int> res=copystack(st);
    // cout<<res.top();
    while(not res.empty()){
        int curr=res.top();
        cout<<curr<<endl;
        res.pop();
    }
    return 0;
}

