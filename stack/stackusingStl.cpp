#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> st;
    st.push(2);
    cout<<"Top: "<<st.top()<<endl;
    st.push(4);
    cout<<st.empty()<<endl;
    cout<<"size : "<<st.size()<<endl;
    return 0;
}