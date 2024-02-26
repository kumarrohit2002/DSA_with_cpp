#include<iostream>
// A wild pointer is a type of a pointer where the user declare the pointer but not initailse. 
using namespace std;
int main(){
    int b=10;
    int *a;// this is wild pointer.
    cout<<*a;// garbeg value....
    cout<<"\n"<<a;
    return 0;
}