#include<stdio.h>
int main(){
	 int arr[8]={1,2,3,4,5,6,7,8};
	 for(int i=0;i<8;i++){
	 	printf("%d ",arr[i]);
	 }
	 printf("\n");
	 for(int i=0;i<8;i++){
	 	if(i%2!=0) arr[i]=2*arr[i];
	 	else arr[i]=10+arr[i];
	 }
	 for(int i=0;i<8;i++){
	 	printf("%d ",arr[i]);
	 }
	return 0;
}
