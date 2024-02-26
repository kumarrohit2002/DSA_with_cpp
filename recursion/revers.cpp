#include<stdio.h>.0
int main(){
	int n;
	scanf("%d",&n);
	int b=n;
	int rev = 0;
//	for(int i=1;n!=0;i++)
//	{
//		a=n%10;
//		n=n/10;
//		printf("%d",a);
//	}
	while(b>0)
	{
		int d = b%10;
		rev = rev*10+d;
		b=b/10;
	}
	if(n==rev) printf("palindrome");
	return 0;
}
