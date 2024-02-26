#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    ofstream obj;  //ofstream is a class for write in file if file is not exist then file is create
    obj.open("file2.txt");  //open is a member function in class ofstream for open a file for write
    obj<<"I am writing text in file2.txt";
    obj.close();  //close is member function for close a file
    cout<<"writing is Done"<<endl;
    ifstream obj1("file2.txt");
    // while(!obj1.eof()){
    //     string ch;
    //     obj1>>ch;          // Print the line with a without space
    //     cout<<ch;
    // }
    string line;
    while(getline(obj1, line)){
        cout << line << endl; // Print the line with a with space
    }
    obj1.close();
}
