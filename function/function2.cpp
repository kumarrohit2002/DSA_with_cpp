#include<stdio.h>
int add(int x,int y){
	return x+y;
}
int sub(int x,int y){
	return x-y;
}
int pro(int x,int y){
	return x*y;
}
int div(int x,int y){
	return x/y;
}
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	int c=add(a,b);
	printf("add= %d\n",c);
	int d=sub(a,b);
	printf("sub= %d\n",d);
	int e=pro(a,b);
	printf("pro= %d\n",e);
	int f=div(a,b);
	printf("div= %d\n",f);
	return 0;	
}

