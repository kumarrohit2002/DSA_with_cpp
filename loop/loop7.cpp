#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++){
		int a=65;
		for(int j=1;j<=i;j++){
			if(i%2==0){ 
			printf("%c",a);
			a=a+j;	
			}
			else printf("%d",j);
		}
		printf("\n");
	}
	return 0;
}
