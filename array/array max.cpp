#include<stdio.h>
int main(){
	int arr[5]={2,3,5,61,4};
	int max=arr[0];
	for(int i=1;i<=4;i++){
		if(max>arr[i]) max=arr[i];
	}
	printf("%d",max);
	return 0;
}
