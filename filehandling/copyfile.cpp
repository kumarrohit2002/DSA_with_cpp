#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream ob1("copy.txt");
    ifstream ob("char.txt");
    char ch;
    ch=ob.get();
    while(ob.eof()==0){
        ob1.put(ch);
        ch=ob.get();
    }
    cout<<"file is copy";
    return 0;
}