#include<iostream>
using namespace std;
class A{
    int a;
    public:
    void get(){
        cout<<"Enter A: ";
        cin>>a;
    }
};
class B{
    int b;
    public:
    void get(){
        cout<<"Enter B: ";
        cin>>b;
    }
};
class c:public B,public A{
    int b;
    public:
    void get(){
        A::get();
        B::get();
        cout<<"Enter C: ";
        cin>>b;
    }
};
int main(){
    c obj;
    obj.get();
    // obj.A::get();
    return 0;
}