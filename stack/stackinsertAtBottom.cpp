#include<iostream>
#include<stack>
using namespace std;

void f(stack<int> &st,int x){
    if(st.empty()){
        st.push(x);
        return ;
    }
    int curr=st.top();
    st.pop();
    f(st,x);
    st.push(curr);
}

int main(){
    stack<int> st;
    st.push(2);
    st.push(4);
    st.push(6);
    st.push(8);
    f(st,10);
    cout<<st.top()<<endl;
    while(not st.empty()){
        int curr=st.top();
        cout<<curr<<" ";
        st.pop();
    }
    return 0;
}