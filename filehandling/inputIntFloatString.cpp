#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    ofstream f("f.txt");
    int number;
    float decimal;
    string s;
    cin>>number>>decimal>>s;
    f<<number<<" "<<decimal<<endl<<s;
    f.close();
    ifstream q("f.txt");
    int x;
    float y;
    string z;
    q>>x>>y>>z;
    cout<<x<<" "<<y<<" "<<z<<endl;
    q.close();
    return 0;
}