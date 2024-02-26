#include<stdio.h>
int main(){
	register int a=5;
	{
		register int b=2;
		printf("%d",a);
	}
	printf("%d",a);
	return 0;
}
