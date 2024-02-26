#include<iostream>
using namespace std;
class TwoStack{
    int* arr;
    int top1;
    int top2;
    int size;
    public:
    TwoStack(int s){
        this->size=s;
        this->top1=-1;
        this->top2=s;
        this->arr=new int[s];
    }

    void push1(int d){
        if(top2-top1 > 1){
            top1++;
            arr[top1]=d;
        }
    }

    void push2(int d){
        if(top2-top1 > 1){
            top2--;
            arr[top2]=d;
        }
    }
    void pop1(){
        if(top1>=0){
            top1--;
        }
        else{
            cout<<"Underflow";
        }
    }
    void pop2(){
        if(top2<size){
            top2++;
        }
        else{
            cout<<"Underflow";
        }
    }

    void gettop1(){
        if(top1>=0){
        cout<<arr[top1]<<endl;
        }
        else{
            cout<<"No element in stack"<<endl;
        }
    }
    void gettop2(){
        if(top2<size){
        cout<<arr[top2]<<endl;
        }
        else{
            cout<<"No element in stack"<<endl;
        }
    }

};

int main(){
    TwoStack s(6);
    s.push1(10);
    s.push2(20);
    s.pop1();
    s.gettop1();
    s.gettop2();

    return 0;
}