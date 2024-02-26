#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main(){
    ofstream f;
    f.open("no.txt",ios::out);
    int cn;
    int n;
    cout<<"Enter the 2 number to append in file: ";
    cin>>cn>>n;
    for(int i=1;i<cn;i++){
        f<<i<<" ";
    }
    f<<n<<endl;
    f.close();
    ifstream s("no.txt");
    string number;   //int char string 
    while(s>>number){
        cout<<number<<endl;
    }
    s.close();
    return 0;
}