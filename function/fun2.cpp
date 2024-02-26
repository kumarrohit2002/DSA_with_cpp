#include<stdio.h>
int sum();
int main(){
	int r;
	r=sum();
	printf("%d",r);
}
int sum(){
	int x,y,z;
	scanf("%d%d",&x,&y);
	z=x+y;
	return z;
}
