#include<iostream>
#include<stack>
#include<math.h>
using namespace std;

int cal(int v1,int v2,char ch){
    if(ch=='^') return pow(v1,v2);
    if(ch=='/') return v1/v2;
    if(ch=='*') return v1*v2;
    if(ch=='+') return v1+v2;
    return v1-v2;
}

int precedence(char ch){
    if(ch=='^') return 3;
    else if(ch=='*' || ch == '/') return 2;
    else if(ch=='+' || ch=='-') return 1;
    else return -1;
}

int eval(string &str){
    stack<int> nums;
    stack<char> ops;
    for(int i=0;i<str.size();i++){
        char ch=str[i];
        if(isdigit(ch)){
                nums.push(ch-'0');
        }
        else if(ch=='('){
            ops.push('(');
        }
        else if(ch==')'){
            while(not ops.empty() && ops.top()!= '('){
                char op=ops.top();
                ops.pop();
                int v2=nums.top();
                nums.pop();
                int v1=nums.top();
                nums.pop();
                nums.push(cal(v1 , v2 , op));
            }
             if(not ops.empty()) ops.pop();
            else{
                while(not ops.empty()  && precedence(ops.top())>= precedence(str[i])){
                    char op=ops.top();
                    ops.pop();
                    int v2=nums.top();
                    nums.pop();
                    int v1=nums.top();
                    nums.pop();
                    nums.push(cal(v1 , v2 , op));
                }
            ops.push(str[i]);
            }
    // for(int i=0;i<str.size();i++){
    //     char ch=str[i];
    //     if(isdigit(ch)){
    //             nums.push(ch-'0');
    //     }
    //     else if(ch=='('){
    //         ops.push('(');
    //     }
    //     else if(ch==')'){
    //         while(not ops.empty() && ops.top()!= '('){
    //             char op=ops.top();
    //             ops.pop();
    //             int v2=nums.top();
    //             nums.pop();
    //             int v1=nums.top();
    //             nums.pop();
    //             nums.push(cal(v1 , v2 , op));
    //         }
    //          if(not ops.empty()) ops.pop();
    //         else{
    //             while(not ops.empty()  && precedence(ops.top())>= precedence(str[i])){
    //                 char op=ops.top();
    //                 ops.pop();
    //                 int v2=nums.top();
    //                 nums.pop();
    //                 int v1=nums.top();
    //                 nums.pop();
    //                 nums.push(cal(v1 , v2 , op));
    //             }
    //         ops.push(str[i]);
    //         }
        }
    }
        while(not ops.empty()){
                    char op=ops.top();
                    ops.pop();
                    int v2=nums.top();
                    nums.pop();
                    int v1=nums.top();
                    nums.pop();
                    nums.push(cal(v1,v2,op));
        }
        return nums.top();
    
}


int main(){
    string s="1+(2*(3-1))+2";   //-9+*132
    cout<<eval(s);
    return 0;
}