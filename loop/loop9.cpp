#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	printf("%d\n",n);
	int c=0;
	for(int i=1;n!=0;i++){
		n=n/10;
		c++;
	}
	printf("digit of number is %d",c);
	return 0;
}
