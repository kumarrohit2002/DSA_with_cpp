#include<stdio.h>
int main(){
	int arr[10][10],b[10][10],r,c;
	printf("Enter the no of row:");
	scanf("%d",&r);
	printf("Enter the no of column:");
	scanf("%d",&c);
	printf("Enter the element of matrix1:");	
	for(int i=0;i<=r-1;i++){
		for(int j=0;j<=c-1;j++){
			scanf("%d",&arr[i][j]);
		}
	}
//	for(int i=0;i<=c-1;i++){
//		for(int j=0;j<=r-1;j++){
//		arr[i][j]=arr[j][i];
//		}
//	}
	printf("transpose is :\n");
	for(int i=0;i<=c-1;i++){
		for(int j=0;j<=r-1;j++){
			printf("%d ",arr[j][i]);
		}
		printf("\n");
	}
	return 0;
}
