#include<stdio.h>
int main(){
	int n;
	printf("Enter the size of Array:");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the number of element:\n");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("your Array is ");
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}
