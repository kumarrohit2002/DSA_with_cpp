#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(4);
    s.insert(2); //because dublicate value is inserted....
    cout<<s.size()<<endl; //so size is 3
    // set contain only unique value

    //iteretor......
    set<int>::iterator itr;
    for(itr=s.begin();itr!=s.end();itr++){
        cout<<*itr<<" ";
    }cout<<endl;


    //another way...
    for(auto value:s){
        cout<<value<<" ";
    }cout<<endl;
    return 0;
}