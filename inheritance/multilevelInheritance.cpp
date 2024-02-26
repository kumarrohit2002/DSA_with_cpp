#include<iostream>
using namespace std;

class length{
    protected:
    int l;
};

class width:public length{
    public:
    int w;
};

class heigth:public width{
    public:
    int h;
    void get(){
        cin>>l>>w>>h;
    }
    void volume(){
        cout<<l*w*h;
    }
};


int main(){
    heigth h;
    h.get();
    h.volume();
    return 0;
}