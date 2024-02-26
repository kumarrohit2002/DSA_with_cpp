#include<iostream>
using namespace std;
class overloding{
    int x;
    int y;
    public:
    overloding(int a,int b){
        x=a;
        y=b;
    }
    friend void operator++(overloding,int);  //for postfix add int here
    // friend void display();
};

void operator++(overloding obj1,int){    //for postfix add int here
    cout<<++obj1.x<<" "<<--obj1.y<<endl;
}

int main(){
    overloding obj1(4,6);
    obj1++;        // and here........
    return 0;
}