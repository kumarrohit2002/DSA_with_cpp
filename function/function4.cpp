#include<stdio.h>
int fact(int a,int n){
	for(int i=1;i<=n;i++){
		a=a*i;
	}
	return a;
}
int main(){
	int a,n;
	a=1;
	printf("Enter the number: ");
	scanf("%d",&n);
	int facto=fact(a,n);
	printf("factorial of %d is %d",n,facto);
	return 0;
}
