#include<iostream>
using namespace std;

class complex{
    public:
    int a,b;
    complex(int aa,int bb){
            a=aa;
            b=bb;
    }
    complex(){};
    complex operator+(complex o2){
        //  return complex(a+o2.a,b+o2.b);
        complex s;
        s.a=a+o2.a;
        s.b=b+o2.b;
        return s;
    }
    void show(){
        cout<<a<<" + "<<b<<"i";
    }
};

int main(){
    complex o1(10,20),o2(30,40);
    complex sum = o1 + o2 ; //sum is object of class 'complex'
    sum.show();
    return 0;
}