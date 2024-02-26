#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    ofstream f;
    f.open("f.txt",ios::app);
    if(!f){
        cout<<"file not open"<<endl;
    }
    else{
        cout<< "File opened successfully"<<endl;
        string s;
        cin>>s;
        f<<" "<<s;
    }
    f.close();
    ifstream f1("f.txt");
    string line;
    while(getline(f1,line)){
        cout << line << endl;
    }
    f1.close();
    return 0;
}