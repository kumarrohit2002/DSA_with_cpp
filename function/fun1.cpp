#include<stdio.h>
void sum(int,int);
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	sum(a,b);
	return 0;
}
void sum(int x,int y){
	printf("%d",x+y);
}
