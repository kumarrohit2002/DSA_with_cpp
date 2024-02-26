#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<char> s;
    string str;
    getline(cin,str);
    for(int i=0;i<str.size();i++){
        if(str[i]==' ') continue;
        if(str[i]=='{' || str[i]=='(' || str[i]=='['){
            s.push(str[i]);
        }
        if(str[i]=='}' || str[i]==')' || str[i]==']'){
            s.pop();
        }
    }
    if(s.empty()) cout<<"vaild";
    else cout<<"not vaild";

    return 0;
}