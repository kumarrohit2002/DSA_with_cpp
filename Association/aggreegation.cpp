#include<iostream>
#include<string.h>
using namespace std;

class depatment{
    public:
    char name[20];
    depatment(){
        strcpy(name,"rohit");
    }
    ~depatment(){
        cout<<"depatment class destroy"<<endl;
    }
};

class professor{
    int pid;
    int exp;
    depatment *d;
    public:
    professor(int pid,int exp,depatment *d){
        this->pid=pid;
        this->exp=exp;
        this->d=d;
    }
    ~professor(){
        cout<<"prfessor class destroy"<<endl;
    }
};



int main(){
    depatment D;
    {
        professor(3,5,&D);
    }
    cout<<"At this point professor is deleted , but depatment is not deleted!!!'"<<endl;
}