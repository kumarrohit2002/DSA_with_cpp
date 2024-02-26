#include<stdio.h>
int num(int n){
	if(n==0) return 0;
	return n-num(n-1);
}
int main(){
	int n;
	scanf("%d",&n);
	int number=num(n);
	printf("%d",n);
	return 0;
}
