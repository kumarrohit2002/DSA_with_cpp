#include<iostream>
using namespace std;

class A{
    public:
    A(){
        cout<<"A constroctor is called"<<endl;
    }
    ~A(){
        cout<<"A destroy"<<endl;
    }
};

class B{
    public:
    B(){
        cout<<"B constroctor is called"<<endl;
    }
    ~B(){
        cout<<"B destroy"<<endl;
    }
};

class C{
    public:
    C(){
        cout<<"C constroctor is called"<<endl;
    }
    ~C(){
        cout<<"C destroy"<<endl;
    }
};

class D:public A,virtual public B,public C{
    public:
    D(){
        cout<<"D constroctor is called"<<endl;
    }
    ~D(){
        cout<<"C destroy"<<endl;
    }
     
};

int main(){
    D obj;
    return 0;

}