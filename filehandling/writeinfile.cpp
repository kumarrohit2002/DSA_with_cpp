#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream obj;  //ofstream is a class for write in file if file is not exist then file is create
    obj.open("file2.txt");  //open is a member function in class ofstream for open a file for write
    obj<<"I am writing text in file2.txt";
    obj.close();  //close is member function for close a file
    cout<<"Done"<<endl;
    return 0;
}