#include<iostream>
#include<stack>
#include<vector>
using namespace std;

vector<int> nge(vector<int> &v){
    int n = v.size();
    vector<int> res(n, -1);
    stack<int> st;
    st.push(0);
    for(int i = 1; i < n; i++){
        while (!st.empty() && v[i] < v[st.top()]){
            res[st.top()] = v[i];
            st.pop();
        }
        st.push(i);
    }
    return res;
}

int main(){
    vector<int> v;
    for(int i = 0; i < 10; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    vector<int> res = nge(v);
    int n = res.size();
    for(int i = 0; i < n; i++){
        cout << res[i] << " ";
    }
    return 0;
}
