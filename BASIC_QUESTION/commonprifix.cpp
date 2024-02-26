#include<iostream>
#include<vector>
#include <algorithm>
#include<string>
using namespace std;

string longestCommonPrifix(vector<string> &s){
    // sorting the array............
    sort(s.begin(),s.end());
    string s1=s[0];
    int i=0;
    string s2=s[s.size()-1];
    int j=0;
    string ans="";
    while(i<s1.size() && j<s2.size()){
        if(s1[i]==s2[j]){
            ans+=s1[i];
            i++;
            j++;
        }
        else break;
    }
    return ans;

}

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    vector<string> str(n);
    for(int i=0;i<n;i++){
        cin>>str[i];
    }
    cout<<"longrst common prifix is: "<<longestCommonPrifix(str);
    return 0;
}
