#include<iostream>
#include<stack>
#include<math.h>
using namespace std;
int cal(int v1,int v2,char ch){
    if(ch=='*') return v1*v2;
    if(ch=='/') return v1/v2;
    if(ch=='+') return v1+v2;
    return v1-v2;
}

int precedence(char ch){
    if(ch=='^') return 3;
    else if(ch== '*' || ch=='/') return 2;
    else if(ch=='+' || ch=='-') return 1;
    else return -1;
}
int evaluate(string &str){
    stack<int> num;
    stack<char> op;
    for(int i=0;i<str.size();i++){
        if(isdigit(str[i])){
            num.push(str[i]-'0');
        } else if(str[i]=='('){
            op.push('(');
        } else if(str[i]==')'){
            while(not op.empty() and op.top() !='('){
                char op1=op.top();
                op.pop();
                int v2=num.top();
                num.pop();
                int v1=num.top();
                num.pop();
                num.push(cal(v1,v2,op1));
            }
            if(not op.empty()) op.pop();
        } else{
            while(not op.empty() and precedence(op.top())>= precedence(str[i])){
                char op1=op.top();
                op.pop();
                int v2=num.top();
                num.pop();
                int v1=num.top();
                num.pop();
                num.push(cal(v1,v2,op1));
            }
            op.push(str[i]);
        }
    }
    while(not op.empty()){
                char op1=op.top();
                op.pop();
                int v2=num.top();
                num.pop();
                int v1=num.top();
                num.pop();
                num.push(cal(v1,v2,op1));
    }
    return num.top();

}

int main(){
    string s="1+(2*(3-1))+2";  // 7
    cout<<evaluate(s);
}