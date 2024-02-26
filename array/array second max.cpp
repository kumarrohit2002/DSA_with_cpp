#include<stdio.h>
int main(){
	int arr[5]={1,2,3,4,5};
	int max=arr[0];
	for(int i=0;i<5;i++){
		if(max>arr[i]) max=arr[i];
	}
	int smax=max;
	for(int j=0;j<5;j++){
		if(smax<arr[j]&&arr[j]!=max){
			smax=arr[j];
		}
	}
	printf("%d",smax); 
	return 0;
}
