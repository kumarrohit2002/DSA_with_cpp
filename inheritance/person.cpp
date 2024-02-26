#include<iostream>
using namespace std;

class person{
    public:
    string name;
    int id;
    int age;
};

class student:public person{
    public:
    string degree;
    void get(){
        cout<<"Enter student deatials: "<<endl;
        cin>>name>>id>>age>>degree;
    }
    void print(){
        cout<<"student Details: "<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"ID:   "<<id<<endl;
        cout<<"Age:  "<<age<<endl;
        cout<<"Degree:"<<degree<<endl;
    }
};

class faculty:protected person{
    public:
    string exp;
    void get(){
        cout<<"Enter faculty deatials: "<<endl;
        cin>>name>>id>>age>>exp;
    }
    void print(){
        cout<<"Faculty Deatials: "<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"ID:   "<<id<<endl;
        cout<<"Age:  "<<age<<endl;
        cout<<"Expr: "<<exp<<endl;
    }
};

class doctor:public person{
    public:
    string specilization;
    void get(){
        cout<<"Enter doctor deatials: "<<endl;
        cin>>name>>id>>age>>specilization;
    }
    void print(){
        cout<<"Doctor details: "<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"ID: "<<id<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Specialization: "<<specilization<<endl;
    }
};

int main(){
    student s;
    faculty f;
    doctor d;
    s.get();
    s.print();
    f.get();
    f.print();
    d.get();
    d.print();
    return 0;
}