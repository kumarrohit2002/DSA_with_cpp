#include<iostream>
using namespace std;

class stack{
    int capacity;
    int *arr;
    int top;
    public:
    stack(int c){
        this->capacity=c;
        this->top=-1;
        arr=new int[c];
    }
    void push(int d){
        if(this->top==this->capacity){
            cout<<"Stack Overflow"<<endl;
            return;
        }
        this->top++;
        this->arr[this->top]=d;
        return;
    }
    void pop(){
        if(this->top==-1){
            cout<<"Underflow";
            return;
        }
        this->top--;
    }
    int gettop(){
        if(this->top==-1){
            cout<<"Underflow"<<endl;
            return -1;
        }
        return this->arr[this->top];
    }
    bool isempty(){
        return this->top==-1;
    }
    bool isfull(){
        return this->top==this->capacity-1;
    }
    int size(){
        return this->top+1;
    }

};


int main(){
    stack st(5);
    st.push(2);
    cout<<st.gettop()<<endl;
    st.push(4);
    cout<<st.gettop()<<endl;
    st.pop();
    cout<<st.gettop()<<endl;
    cout<<st.size()<<endl;
    cout<<st.isfull()<<endl;
    st.pop();
    cout<<st.isempty()<<endl;

    return 0;
}