#include<iostream>
using namespace std;
class stack{
    int capacity;
    int *arr;
    int top;
    public:
    stack(int c){
    this->capacity=c;
    arr=new int[c];
    this->top=-1;
    }
    void push(int d){
        if(this->top>this->capacity-1){
            cout<<"overflow"<<endl;
            return;
        }
        
        this->top++;
        this->arr[this->top]=d;
    }

    void pop(){
        if(this->top==-1){
            cout<<"Underflow"<<endl;
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
    
    int size(){
        return this->top+1;
    }

    bool isfull(){
        return (this->top) == (this->capacity-1);
    }
};


int main(){
    stack s(5);
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.pop();
    s.push(9);
    s.push(7);
    cout<<"Top element: "<<s.gettop()<<endl;
    cout<<s.size();
    return 0;
}