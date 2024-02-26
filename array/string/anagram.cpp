#include<iostream>
#include<string>
#include<vector>
using namespace std;                                      // time complexity=  O(length of string);
                                                          // space complexity= O(1);

bool isanagram(string s1,string s2){
    if(s1.size()!=s2.size()) return false;
    vector<int> v(26,0);
    for(int i=0;i<s1.size();i++){
        int index=i-'a';
        v[index]++;
    }
    for(int i=0;i<s2.size();i++){
        int index=i-'a';
        v[index]--;
    }
    for(int i=0;i<s1.size();i++){
        if(v[i]!=0){
            return false;
        }
    }
    return true;
}

int main(){
    string str1="anagram";
    string str2="nagaram";
    cout<<isanagram(str1,str2);
    return 0;
}