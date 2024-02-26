#include<stdio.h>
int factorial(int n){
	if (n==1 ||n==0) return 1;
	int recursion= n*factorial(n-1);
	return recursion;
}
int main(){
	int n;
	printf("Enter the number: ");
	scanf("%d",&n);
	int fact=factorial(n);
	printf("Factorial of n is = %d",fact);
	return 0;
	
}
