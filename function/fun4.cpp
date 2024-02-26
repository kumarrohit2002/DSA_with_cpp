#include<stdio.h>
int fun(int x,int y){
	if(x==0) return y;
	return fun(x-1,x+y);
}
int main(){
	int x=4,y=3;
	printf("%d\n",fun(x,y));
	return 0;
}
