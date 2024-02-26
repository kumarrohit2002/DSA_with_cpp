#include<stdio.h>
int fun(int x, int y) 
{
  if (x == 0)
    return y;
  return fun(x - 1,  x + y);
} 
int main(){
	int x=fun(4,3);
	printf("%d",1%2);
	return 0;
}
