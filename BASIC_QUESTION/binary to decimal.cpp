#include<stdio.h>
#include<math.h>
int main(){
	int a;
	printf("Enter the binary number: ");     // 1010
	scanf("%d",&a);
	int rem=0;
	int decn=0;
	int count=0;
	while(a!=0){
		rem=a%10;
		decn=decn+rem*pow(2,count);
		count++;
		a=a/10;
	}
	printf("%d",decn);
}
