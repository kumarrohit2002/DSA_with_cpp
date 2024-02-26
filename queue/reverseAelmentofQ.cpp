#include<iostream>
#include<stack>
#include<queue>
using namespace std;

void reverseQ(queue<int> &qe){
    if(qe.empty()) return;
    int curr=qe.front();
    qe.pop();
    reverseQ(qe);
    qe.push(curr);
    return;
}

int main(){
    queue<int> qe;
    qe.push(2);
    qe.push(4);
    qe.push(6);
    qe.push(8);
    qe.push(10);
    reverseQ(qe);
    while(not qe.empty()){
        cout<<qe.front()<<endl;
        qe.pop();
    }
    return 0;
}