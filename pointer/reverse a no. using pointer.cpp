#include<stdio.h>
int main(){
	int n;
	int m=0;
	int *p;
	int *pm=&m;
	p=&n;
	int c;
	scanf("%d",&*p);
	while(*p!=0){
		c=*p%10;
		*pm=(*pm)*10+c;
		*p=*p/10;
	}
	printf("\n%d",m);
	return 0;
}
