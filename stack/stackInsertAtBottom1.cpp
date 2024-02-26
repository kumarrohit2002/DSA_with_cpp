#include<iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int> &st,int x){
    if(st.empty()){
        st.push(x);
        return;
    }
    int curr=st.top();
    st.pop();
    insertAtBottom(st,x);
    st.push(curr);
    return;
}

int main(){
    
    stack<int> st;
    st.push(2);
    st.push(4);
    st.push(6);
    st.push(8);
    insertAtBottom(st,0);
    while(not st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
    return 0;

}