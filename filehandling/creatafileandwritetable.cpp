#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream ob("file.txt");
    int n;
    cin>>n;
    for(int i=1;i<11;i++){
        ob<<i<<"*"<<n<<"="<<i*n<<"\n";
    }
    ob.close();
    return 0;
}