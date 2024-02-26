#include<stdio.h>
void fun(int *a,int *b){
	int z;
	z=*a;
	*a=*b;
	*b=z;
	printf("%d %d",*a,*b);
}
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	fun(&a,&b);
	
}
