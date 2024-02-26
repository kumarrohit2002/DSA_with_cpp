#include<stdio.h>
int fact(int n){
	int a=1;
	for(int i=1;i<=n;i++){
		a=a*i;
	}
	return a;
}
int main(){
	int n,r;
	printf("Enter n: ");
	scanf("%d",&n);
	printf("Enter r: ");
	scanf("%d",&r);
	int fn=fact(n);
	int fr=fact(r);
	int fn_r=fact(n-r);
	int ncr=fn/(fr*fn_r);
	printf("ncr is %d",ncr);
	return 0;
}
