#include<iostream>
#include<string.h>
using namespace name;

class birthday{
    int d,m,y;
    birthday(int d,int m,int y){
        this->d=d;
        this->m=m;
        this->y=y;
    }
    void display(){
        cout<<d<<"/"<<m<<"/"<<y<<ensl;
    }
    ~birthday(){
        cout<<"birthday destroy"<<endl;
    }
};

class person{
    string name;
    birthday *b;
    public:
    person(int d,int m,int y,string name):b(d,m,y)
    {
        this->name=name;
        cout<<"person constructor"
    }
    void show(){
        b->display();
        cout<<name<<endl;
    }
    ~person(){
        cout<<"person destory"<<endl;
    }
};

int main(){
    person p(2,3,2022,"rohit");
    c
}
