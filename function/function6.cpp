#include<stdio.h>
//      1
//     1 1
//    1 2 1
//   1 3 3 1
//  1 4 6 4 1
// 1 5 10 10 5 1
int fact(int n){
	int a=1;
	for(int i=1;i<=n;i++){
		a=a*i;
	}
	return a;
}
int combination(int n,int r){
	int ncr;
	ncr=fact(n)/(fact(r)*fact(n-r));
	return ncr;
}
int main(){
	int n;
	printf("Enter the n: ");
	scanf("%d",&n);
	for(int i=0;i<=n;i++){
		for(int j=1;j<=n+1-i;j++){
			printf(" ");
		}
			printf("1 ");
		for(int k=1;k<=i;k++){
			int ick=combination(i,k);
			printf("%d ",ick);
		}
		printf("\n");
	}
	return 0;
}
