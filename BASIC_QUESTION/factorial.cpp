#include<stdio.h>
int main(){
	int n;
	printf("Enter the number: ");
	scanf("%d",&n);
	int a=1;
	for(int i=1;i<=n;i++){
		a=a*i;
	}
	printf("%d\n",a);
	return 0;
}
