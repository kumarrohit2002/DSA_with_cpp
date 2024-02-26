#include<iostream>
using namespace std;
class student{
    protected:
    int rno;
    public:
    void getrno(){
        cin>>rno;
    }
};

class test:public student{
    protected:
    int m1,m2;
    public:
    void gett(){
        getrno();
        cin>>m1>>m2;
    }
};

class sport{
    protected:
    int sm;
    public:
    void gets(){
        cin>>sm;
    }

};

class result:public sport,public test{
    public:
    void get(){
        gett();
        gets();
    }
    void sum(){
        cout<<m1+m2+sm;
    }
};

int main(){
    result r;
    r.get();
    r.sum();
    return 0;
}