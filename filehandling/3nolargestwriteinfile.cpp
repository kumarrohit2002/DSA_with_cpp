#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream ob1("file11.txt");
    int a,b,c;
    cin>>a>>b>>c;
    ob1<<" "<<a; 
    ob1<<" "<<b;
    ob1<<" "<<c;
    if(a>b && a>c) ob1<<"\n"<<a;
    else if(b>c && b>a) ob1<<"\n"<<b;
    else ob1<<"\n"<<c;
    return 0;
}