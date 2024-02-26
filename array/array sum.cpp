#include<stdio.h>
int main(){
	int arr[5]={1,2,3,4,5};
	int sum=0;
	int pro=1;
	for(int i=0;i<=4;i++){
		sum=sum+arr[i];
		pro=pro*arr[i];
	}
	printf("%d",sum);
	printf("\n%d",pro);
	return 0;
}
