#include<iostream>
#include<stack>
using namespace std;

void copystack(stack<int> &st,stack<int> &result){
    if(st.empty()){
        return;
    }
    int curr=st.top();
    result.push(curr);
    st.pop();
    return copystack(st,result);
}

int main()
{
    stack<int> st;
    st.push(2);
    st.push(4);
    st.push(6);
    st.push(8);
    stack<int> result;
    copystack(st,result);
    // cout<<result.top();
    while(not result.empty()){
        int cur=result.top();
        cout<<cur<<" ";
        result.pop();
    }

    return 0;
}