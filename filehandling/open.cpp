#include<iostream>
#include<fstream>
using namespace std;
int main(){
    char name[50];
    int rno;
    ofstream obj;
    obj.open("file1.txt");
    obj<<"abcd\n";
    cin>>name;
    cin>>rno;
    obj<<name<<"\n";
    obj<<rno;
    obj.close();
}