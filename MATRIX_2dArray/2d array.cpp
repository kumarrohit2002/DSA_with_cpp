#include<stdio.h>
int main(){
	int arr[10][10],brr[10][10],srr[10][10],r1,c1,r2,c2;
	printf("Enter the no of row1:");          // 90 degree rotation clock wise...........
	scanf("%d",&r1);
	printf("Enter the no of column1:");
	scanf("%d",&c1);
	printf("Enter the no of row2:");          
	scanf("%d",&r2);
	printf("Enter the no of column2:");
	scanf("%d",&c2);
	printf("Enter the element of matrix1:\n");
	if(c1==r2){
		for(int i=0;i<=r1-1;i++){
			for(int j=0;j<=c1-1;j++){
				scanf("%d",&arr[i][j]);
			}
		}
			printf("Enter the element of matrix2:\n");	
		for(int i=0;i<=r2-1;i++){
			for(int j=0;j<=c2-1;j++){
				scanf("%d",&brr[i][j]);
			}
		}
			printf("matrix1 * matrix2 is :\n");	
		for(int i=0;i<=r1-1;i++){
			for(int j=0;j<=c2-1;j++){
				srr[i][j]=0;
				for(int k=0;k<=r1-1;k++){
					srr[i][j]=srr[i][j]+arr[i][k]*brr[k][i];
				}
			}
		}
		for(int i=0;i<=r1-1;i++){
			for(int j=0;j<=c2-1;j++){
				printf("%d",srr[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}
