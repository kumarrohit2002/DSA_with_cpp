#include<iostream>
#include<algorithm>
#include<stack>
#include<vector>
using namespace std;

vector<int> pge(vector<int> &v){
    int n = v.size();
    reverse(v.begin(),v.end());
    vector<int> res(n, -1);
    stack<int> st;
    st.push(0);
    for(int i = 1; i < n; i++){
        while (!st.empty() && v[i] > v[st.top()]){ 
            res[st.top()] = n-i-1;         // here is algorithm...........
            st.pop();                      // because after reverse the index will be chanse....
        }
        st.push(i);
    }
    reverse(v.begin(),v.end());
    reverse(res.begin(),res.end());
    return res;
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
    vector<int> res=pge(v);
    for(int i=0;i<n;i++){
        cout<<(i-res[i])<<" ";
    }

    return 0;
}
