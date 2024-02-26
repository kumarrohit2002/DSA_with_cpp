#include<iostream>
#include<stack>
#include<queue>
using namespace std;
int main(){
    queue<int> qe;
    stack<int> st;
    qe.push(2);
    qe.push(4);
    qe.push(6);
    qe.push(8);
    qe.push(10);
    while(not qe.empty()){
        st.push(qe.front());
        qe.pop();
    }
    while(not st.empty()){
        qe.push(st.top());
        st.pop();
    }
    while(not qe.empty()){
        cout<<qe.front()<<endl;
        qe.pop();
    }
    return 0;
}