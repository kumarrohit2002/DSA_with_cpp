#include<stdio.h>
int main(){
	int a=0;
	int b=1;
	int c,n;
	scanf("%d",&n);
	printf("%d %d ",a,b);
	for (int i=3;i<=n;i++){
		c=a+b;
		printf("%d ",c);
		a=b;
		b=c;
	}
	return 0;
}
