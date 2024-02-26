#include<iostream>
using namespace std;
int largest(int *a,int *b,int *c){
    if(*a>*b && *a>*c) return *a;
    else if(*b>*a && *b>*c) return *b;
    else return *c;
}
int smallest(int *a,int *b,int *c){
    if(*a<*b && *a<*c) return *a;
    else if(*b<*a && *b<*c) return *b;
    else return *c;
}
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int *r=&a;
    int *s=&b;
    int *t=&c;
    cout<<largest(r,s,t)<<" "<<smallest(r,s,t);
    return 0;
}