#include<stdio.h>
int fun(int n){
	if(n==0) return n;
	printf("%d\n",n);
	return n+fun(n-1);
}
int main(){
	int n;
	scanf("%d",&n);
	int a=fun(n);
	printf("%d",a);
}
