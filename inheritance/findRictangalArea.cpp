#include<iostream>
using namespace std;
class ractangal{
    protected:
    int l,b;
    public:
    void get(){
        cin>>l>>b;
    }
};

class area:protected ractangal{
    private:
    int area;
    public:
    void cla(){
        get();
        area=l*b;
        cout<<area;
    }
};
int main(){
    area a;
    a.cla();
}