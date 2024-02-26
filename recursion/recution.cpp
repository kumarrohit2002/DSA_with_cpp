#include<stdio.h>
void fun(int n){
	if(n==0) return;
	printf("%d\n",n%2);
	fun(n/2);
}
int main(){
	int n=25;
	fun(n);
	return 0;
}
