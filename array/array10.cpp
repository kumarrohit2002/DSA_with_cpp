#include<stdio.h>
int main(){
	int arr[5]={51,34,53,53,52};
	int max=arr[0];
	int smax=arr[0];
	for(int i=0;i<5;i++){
		if(max>arr[i]){      //max avi minimum hai
			max=arr[i];
		}
	}
	smax=max;
	for(int i=0;i<5;i++){
		if(max<arr[i]){
			smax=max;
			max=arr[i];
		}
		else if(smax<arr[i] && max!=arr[i]){
			smax=arr[i];
		}
	}
	printf("%d",smax);
	return 0;
}
