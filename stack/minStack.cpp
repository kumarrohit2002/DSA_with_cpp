#include<iostream>
#include<stack>
using namespace std;
#define ll long long int
class minstack{
    public:
    stack<ll> st;
    ll mn;
    mintstack(){
        this->mn=INT_FAST8_MAX;
    }

    void push(int val){
        if(this->st.empty()){
            this->mn=val;
            this->st.push(val);
        } else{
            this->st.push(val-this->mn);
            if(this->mn>val){
                this->mn=val;
            }
        }
    }

    void pop(){
        if(not this->st.empty()){
            if(this->st.top()>=0){
                this->st.pop();
            } else{
                this->mn = this->mn - this->st.top();
                this->st.pop();
            }
        }
    }

    int top(){
        if(this->st.size()==1){
            return this->st.top();
        } else if(this->st.top() < 0){
                return this->mn;
        } else{
            return this->mn + this->st.top();
        }
    }

    int getmin(){
        return this->mn;
    }
};


int main(){
    minstack m;
    m.push(-2);
    m.push(0);
    m.push(-3);
    cout<<"get mn: "<<m.getmin()<<endl;
    m.pop();
    cout<<"top: "<<m.top()<<endl;
    cout<<"get mn: "<<m.getmin()<<endl;

    return 0;
}