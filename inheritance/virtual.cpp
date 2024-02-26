#include<iostream>
using namespace std;
class student{
    int rno;
    public:
    void get(){
        cout<<"Enter  roll no: ";
        cin>>rno;
    }
    int r(){
        return rno;
    }   
};

class acad:public virtual student{
    public:
    int m[5];
};

class sport:public virtual student{
    public:
    int sm;
    void gets(){
        cin>>sm;
    }

};

class result:public sport,public acad{
    public:
    void getm(){
        student::get();
       cout<<"Enter marks: "<<endl;
       for(int i=0;i<5;i++){
        cin>>m[i];
       }
       cin>>sm;
    }
    void sum(){
        cout<<"roll no is : ";
        cout<<r()<<endl;
        cout<<"total marks is: ";
        int s=0;
        for(int i=0;i<5;i++){
            s+=m[i];
        }
        cout<<s+sm;
    }
};

int main(){
    result r;
    r.getm();
    r.sum();
    return 0;
}