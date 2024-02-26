#include<stdio.h>
void sum(int x);
int main(){
	int a=7;
	sum(a);
	printf("%d",a);
}
void sum(int a){
	a=a-3;
	printf("%d",a);
}
