#include<iostream>
#include<stack>
using namespace std;

// void popAnyindex(stack<int> &st,int idx){
//     int n=st.size();
//     stack<int> temp;
//     int count=0;
//     while(count < n - idx){
//         count++;
//         int curr=st.top();
//         st.pop();
//         temp.push(curr);
//     }
//     st.pop();
//     while(not temp.empty()){
//         int curr=temp.top();
//         temp.pop();
//         st.push(curr);
//     }
//     return;
// }


void popAnyindex(stack<int> &st,int c,int n,int idx){
    if(c == n-idx){
        st.pop();
        return;
    }
    int curr=st.top();
    st.pop();
    popAnyindex(st,c+1,n,idx);
    st.push(curr);
    return;
}

int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    // popAnyindex(st,2);
    popAnyindex(st,0,st.size(),2);
    while(not st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
    return 0;
}