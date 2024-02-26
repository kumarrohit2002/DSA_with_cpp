#include<iostream>
using namespace std;
class convert{
    public:
    int inch;
    convert(int n){
        inch=12*n;
    }
};
int main(){
    int feat;
    cin>>feat;
    convert c(feat);
    cout<<c.inch;
    return 0;
}