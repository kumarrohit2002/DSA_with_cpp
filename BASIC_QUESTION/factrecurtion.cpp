#include<stdio.h>
int facto(int n){
	if(n<=1) return 1;
	else return n*facto(n-1);
}
int main(){
	int n=5;
	int fact;
	fact=facto(n);
	printf("%d",fact);
}
