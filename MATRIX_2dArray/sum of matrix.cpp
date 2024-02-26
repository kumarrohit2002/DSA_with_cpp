#include<stdio.h>
int main(){
	int arr[10][10],brr[10][10],r,c,r1,c1;
	printf("Enter the no of row:");
	scanf("%d",&r);
	printf("Enter the no of column:");
	scanf("%d",&c);
	printf("Enter the no of row:");
	scanf("%d",&r1);
	printf("Enter the no of column:");
	scanf("%d",&c1);
	printf("Enter the element of matrix1:");	
	for(int i=0;i<=r-1;i++){
		for(int j=0;j<=c-1;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	printf("Enter the element of martix2:");
	for(int i=0;i<=r1-1;i++){
		for(int j=0;j<=c1-1;j++){
			scanf("%d",&brr[i][j]);
		}
	}
	for(int i=0;i<=r-1;i++){
		for(int j=0;j<=c-1;j++){
			printf("%d\t",arr[i][j]+brr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
