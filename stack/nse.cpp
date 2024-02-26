#include<iostream>
#include<stack>
#include<vector>
using namespace std;

vector<int> nse(vector<int> &v){
    int n=v.size();
    vector<int> temp(n, -1);
    stack<int> st;
    st.push(0);
    for(int i=1; i<n ;i++){
        while(!st.empty() && v[i]<v[st.top()]){
            temp[st.top()]=v[i];
            st.pop();
        }
        st.push(i);
    }
    return temp;
}

int main(){
    vector<int> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    vector<int> res=nse(v);
    for(int i=0;i<n;i++){
        cout<<res[i]<<" ";
    }

    return 0;
}