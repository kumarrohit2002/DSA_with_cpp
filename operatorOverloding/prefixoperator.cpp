// You are using GCC
#include<iostream>
using namespace std;

class abc{
    private:
    int x;
    public:
    abc(int a){
        x=a;
    }
    void display(){
        cout<<x<<endl;
    }

    void operator++(){
        x=++x;
    }
};


int main(){
    abc s(10);
    cout<<"s: ";
    s.display();
    ++s;
    cout<<"s: ";
    s.display();
    return 0;
}