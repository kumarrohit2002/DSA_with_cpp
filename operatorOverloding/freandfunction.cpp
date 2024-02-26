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
    friend void operator++(overloding);
    // friend void display();
};

void operator++(overloding obj1){
    cout<<++obj1.x<<" "<<--obj1.y<<endl;
}
q
int main(){
    overloding obj1(4,6);
    ++obj1;
    return 0;
}