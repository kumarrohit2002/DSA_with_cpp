#include<iostream>
#include<stack>
using namespace std;

// void insertAtAnyindex(stack<int> &st,int idx,int x){
//     stack<int> temp;
//     int n=st.size();
//     int count=0;
//     while(count < n - idx){
//         count++;
//         int curr=st.top();
//         st.pop();
//         temp.push(curr);
//     }
//     st.push(x);
//     while(not temp.empty()){
//         int curr=temp.top();
//         temp.pop();
//         st.push(curr);
//     }
//     return;
// }

void insertAtAnyindex(stack<int> &st,int size,int c,int idx,int x){
    if(c==size-idx){
        st.push(x);
        return;
    }
    int curr=st.top();
    st.pop();
    insertAtAnyindex(st,size,c+1,idx,x);
    st.push(curr);
    return;
}

int main(){
    
    stack<int> st;
    st.push(2);
    st.push(4);
    st.push(6);
    st.push(8);
    // insertAtAnyindex(st,2,0);
    insertAtAnyindex(st,st.size(),0,2,100);
    while(not st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
    return 0;

}