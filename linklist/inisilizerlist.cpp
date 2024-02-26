#include<iostream>
using namespace std;
class student{
    string name;
    int rno;
    string city;
    int age;
    public:
    student(string name,int rno,string city,int age): 
    name(name),rno(rno),city(city),age(age)
    {
        
    }

    ~student(){
        cout<<"destructor!!!!!!!!!!"; 
    }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"roll no: "<<rno<<endl;
        cout<<"City: "<<city<<endl;
        cout<<"Age: "<<age<<endl;
    }
};
int main(){
    student s("rohit",30,"Chapra",22);
    s.display();
    return 0;
}