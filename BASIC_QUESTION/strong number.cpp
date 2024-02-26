#include<stdio.h>
int fun(int n);
int main(){
	int n,sum=0,red;                               //check number is strong or not!!!!!!!!!!!
	printf("Enter the number: ");
	scanf("%d",&n);
	int temp=n;
	for(int i=0;n>0;i++){
	red=n%10;
	sum=sum+fun(red);
	n=n/10;
}
	if(temp==sum) printf("strong number");
	else printf("not strong number");
	return 0;
}
int fun(int n){
	int a=1;
	for(int i=1;i<=n;i++){
		a=a*i;
	}
	return a;
}
