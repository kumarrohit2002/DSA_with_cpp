#include<iostream>
using namespace std;

class arithmetic{
    public:
    int a,b;
    void getdata(int aa,int bb){
        a=aa;
        b=bb;
    }
    int operator+(arithmetic o2){
        return a+o2.b;
    }
    int operator-(arithmetic o2){
        return a-o2.b;
    }
    int operator*(arithmetic o2){
        return a*o2.a;
    }
};

int main(){
    arithmetic o1,o2;
    o1.getdata(10,20);
    o2.getdata(20,40);
    int d=o1-o2;
    int c=o1*o2;
    cout<<c;
    return 0;
}