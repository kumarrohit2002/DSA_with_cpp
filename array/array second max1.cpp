#include<stdio.h>
int main(){
	int arr[5]={34,66,123,65,24};
	int max=arr[0];
	int smax=0;
	for(int i=0;i<5;i++){
		if(max>arr[i]){
			max=arr[i];
		}
	}
	smax=max;
	for(int i=0;i<5;i++){
		if(max<arr[i]){
			smax=max;
			max=arr[i];
		}
		else if(smax<arr[i]){
			smax=arr[i];
		}
	}
	printf("%d",smax);
	return 0;
}
