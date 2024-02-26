#include<iostream>
#include<queue>
#include<stack>

using namespace std;
int main(){
    queue<int> qe;
    qe.push(2);
    qe.push(4);
    qe.push(6);
    // cout<<qe.front();
    while(not qe.empty()){
        cout<<qe.front()<<" ";
        qe.pop();
    }

    return 0;
}