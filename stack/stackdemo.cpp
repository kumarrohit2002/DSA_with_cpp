#include<iostream>
#include<stack>
using namespace std;

void display(stack<int> s){
    if(s.empty()) return;
    int temp=s.top();
    cout<<temp<<" ";
    s.pop();
    display(s);
    s.push(temp);
    return;
}

int main(){
    int n;
    cin>>n;
    stack<int> s;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        s.push(x);
    }
    cout<<"stack element is: ";
    display(s);
    cout<<endl;
    cout<<"Top element is: "<<s.top();
    s.pop();
    cout<<endl;
    cout<<"before pop: ";
    display(s);
    return 0;
}