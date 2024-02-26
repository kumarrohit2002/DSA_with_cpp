#include<iostream>
using namespace std;
void TOH(int n,int A,int B,int C){
    if(n>0){
        TOH(n-1,A,B,C);
        cout<<A<<B;
        
    }
}

int main(){
    
    return 0;
}