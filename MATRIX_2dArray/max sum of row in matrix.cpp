#include<stdio.h>
int main(){
	int arr[10][10],r,c;
	printf("Enter the number of rows: ");
	scanf("%d",&r);
	printf("Enter the number of cluomns: ");
	scanf("%d",&c);
	for(int i=0;i<=r-1;i++){
		for(int j=0;j<=c-1;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	for(int i=0;i<=r-1;i++){
		for(int j=0;j<=c-1;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	int sum=0;
	int update=0;
	for(int i=0;i<=r-1;i++){
		for(int j=0;j<=c-1;j++){
			sum=sum+arr[i][j];
		}
		if(update<sum){
			update=sum;
			int c=i;
		}
	}
	printf("row no. %d  is sum =%d",c,update);
	return 0;
}
