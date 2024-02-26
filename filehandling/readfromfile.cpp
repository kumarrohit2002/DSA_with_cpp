#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    ifstream obj;
    obj.open("file2.txt");
    string n;
    char a;
    obj>>n;  //one char is taken from file2.txt
    obj>>a;  //next one char taken from file2.txt
    cout<<n<<" "<<a; // print char those i have taken
    obj.close();
    return 0;
}