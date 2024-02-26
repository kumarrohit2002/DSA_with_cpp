#include<stdio.h>
int fibo(int n){
	if(n<=2) return 1;
	int a=fibo(n-1)+fibo(n-2);
	return a;
}
int main(){
	int n;
	scanf("%d",&n);
	int a=fibo(n);
	printf("%d",a);
	return 0;
}
