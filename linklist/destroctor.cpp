#include<iostream>
using namespace std;
class student{
    int id;
    public:
    student(int id): id(id)
    {

    }
    ~student(){
        cout<<"distrucor with id= "<<id<<endl;
    }
    // void display(){
       
    // }
};
int main(){
    student s(2);
    student s1(3);
    student s2(4);
    student s3(5);
    return 0;
}