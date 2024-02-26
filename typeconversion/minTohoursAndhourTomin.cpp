#include<iostream>
using namespace std;
class convert{
    public:
    int min;
    float hrs;
    convert(int a,int b){
        min=a;
        hrs=b;
    }
    operator int(){
        return (min);
    }
    operator float(){
        return hrs;
    }
};

int main(){
    int min;
    float hrs;
    cin>>hrs>>min;
    convert c(min,hrs);
    min=c;
    hrs=c;
    cout<<"min: "<<min<<endl;
    cout<<"hrs: "<<hrs;
    return 0;
}