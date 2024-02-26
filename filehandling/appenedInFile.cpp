#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    fstream obj;
    obj.open("file2.txt",ios::app);
    obj<<" hello";
    obj.close();
    cout<<"text appened";
    return 0;
}