#include<stdio.h>
void fun(int arr[]){
	int tem=arr[0];
	arr[0]=arr[1];
	arr[1]=tem;
}
int main(){
	int arr[2]={1,2};
	printf("%d %d\n",arr[0],arr[1]);
	fun(arr);
	printf("%d %d",arr[0],arr[1]);
	return 0;
}
