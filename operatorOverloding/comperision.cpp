#include<iostream>
using namespace std;
class com{
    public:
    int a,b;
    void get(int aa,int bb){
        a=aa;
        b=bb;
    }
    void operator>(com o4){
        cout<< a>o4.b;
    }
};

int main(){
    com o1,o2;
    o1.get(10,20);
    o2.get(30,40);
    // bool a;
    // a=o1<o2;
    o1>o2;
    // cout<<a;
    return 0;
}