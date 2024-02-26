#include<iostream>
#include<vector>
#include<string>
using namespace std;
string sorting_str(string str){
    int n=str.length();
    vector<int> v(26,0);

    //storing frequency of every char................
    for(int i=0;i<n;i++){
        int index=str[i]-'a';
        v[index]++;
    }

    // creat our storing string...........
    int j=0;
    for(int i=0;i<26;i++){
        while(v[i]--){
            str[j++]=i+'a';

        }
    }
    // cout<<str<<endl;
    return str;

}
int main(){
    string str="rohit";
    string s=sorting_str(str);
    cout<<s;
    return 0;
}