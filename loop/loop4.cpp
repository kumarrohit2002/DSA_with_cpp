#include<stdio.h>
int main(){
	int n,m;
	printf("Enter m=");
	scanf("%d",&m);
	printf("Enter n=");
	scanf("%d",&n);
	int a=0;
	for (int i=m;i<=n;i++){
		if(i%2==0){
		 printf("%d\n",i);
		a=a+1;}
	}
	printf("Count is %d",a);
	return 0;
}
