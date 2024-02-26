#include<iostream>
#include<string>
#include<vector>
using namespace std;

bool isomorfic(string s1,string s2){
    if(s1.size()!=s2.size()) return false;
    vector<int> v1(26,-1);
    vector<int> v2(26,-1);
    for(int i=0;i<s1.size();i++){
        int idx1=s1[i]-'a';
        int idx2=s2[i]-'a';
        if(v1[idx1]!=v2[idx2]) return false;
        else{
            v1[idx1]=i;
            v2[idx2]=i;
        }    
    }
    return true;
}

int main (){
    string str1="egg";
    string str2="add";
    cout<<isomorfic(str1,str2);
    return 0;
}