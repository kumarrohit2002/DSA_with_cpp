#include<iostream>
using namespace std;

class student{
    int rno;
    protected:
    string section;
    public:
    void get(){
        cin>>rno>>section;
    }
    void put(){
        cout<<"Roll no: "<<rno<<endl;
    }
};

class result:public student{
    protected:
    int marks;
    public:
    void getmarks(){
        cin>>marks;
    }
    void display(){
        put();
        cout<<"Section: "<<section<<endl;
        cout<<"Marks: "<<marks;
    }
};

int main(){
    result obj;
    obj.get();
    obj.getmarks();
    obj.display();
    return 0;
}