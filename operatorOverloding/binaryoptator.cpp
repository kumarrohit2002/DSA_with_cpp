// You are using GCC
#include<iostream>
using namespace std;

class abc{
    private:
    int x;
    int y;
    public:
    abc(int a,int b){
        x=a;
        y=b;
        
    }
    void display(){
        cout<<x<<endl;
        cout<<y<<endl;
    }

    void operator++(int)
    {
        x=++x;
        y=y+2;
    }
    void operator--(int){
        x=--x;
        y=--y;
    }
};


int main(){
    abc s(10,200);
    cout<<"s: ";
    s.display();
    ++s;
    cout<<"s: ";
    s.display();
    
    return 0;
}