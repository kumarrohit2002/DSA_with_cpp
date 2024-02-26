#include<stdio.h>
int main(){
	int n;
	printf("Enter the number: ");
	scanf("%d",&n);
	int sum;
	for (int i=1;i<=n;i++){
		sum=sum+i;
	}
	printf("%d\n",sum);
	return 0;
}
