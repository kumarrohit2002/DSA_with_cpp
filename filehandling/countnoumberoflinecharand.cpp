#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ifstream ob("char.txt");
    char n[20];
    ob>>n;
    cout<<n;
    ob.close();
    return 0;
}