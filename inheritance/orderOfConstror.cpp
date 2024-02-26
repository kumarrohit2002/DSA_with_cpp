#include<iostream>
using namespace std;

class A{
    public:
    A(int a){
        cout<<"A constroctor is called"<<endl;
    }
    ~A(){
        cout<<"A destroy"<<endl;
    }
};

class B:public A{
    public:
    B(int b):A(b){
        cout<<"B constroctor is called"<<endl;
    }
    ~B(){
        cout<<"B destroy"<<endl;
    }
};

class C:public B{
    public:
    C(int c):B(c){
        cout<<"C constroctor is called"<<endl;
    }
    ~C(){
        cout<<"C destroy"<<endl;
    }
};

int main(){
    C obj(4);
    return 0;

}