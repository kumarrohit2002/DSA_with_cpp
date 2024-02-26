#include<stdio.h>
int main(){
	int arr[]={1,2,4,5,6,7,8,9};
	int c=0;
	for (int i=0;arr[i]!=0;i++){
		c++;
	}
	printf("%d",c);
	return 0;
}
