#include<stdio.h>
int main(){
	int arr[10][10],r1,c1;
	printf("Enter the row1 : ");
	scanf("%d",&r1);
	printf("Enter the column1 :");
	scanf("%d",&c1);
	for(int i=0;i<=r1-1;i++){
		for(int j=0;j<=c1-1;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	int sum=0;
	for(int i=0;i<=r1-1;i++){
		for(int j=0;j<=c1-1;j++){
				sum=sum+arr[i][j];
		}
	}
			printf("%d",sum);
	return 0;
}
