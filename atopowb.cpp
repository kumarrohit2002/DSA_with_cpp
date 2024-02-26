#include<stdio.h>
int fun(int a,int b){
	if(b==0) return 1;
	return a*fun(a,b-1);
}
int main(){
	int a;
	int b;
	scanf("%d%d",&a,&b);
	int pow=fun(a,b);
	printf("%d",pow);
	return 0;
}
