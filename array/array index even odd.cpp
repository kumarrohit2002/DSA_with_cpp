#include<stdio.h>
int main(){
	int arr[6]={1,5,5,7,9,11};
	int sumev=0,sumodd=0;
	for (int i=0;i<6;i++){
		if(i%2!=0) sumev=sumev+arr[i];
		else sumodd=sumodd+arr[i];
	}
	printf("sum of even= %d\n",sumev);
	printf("sum of odd= %d",sumodd);
	printf("\n diff even and odd = %d",sumev-sumodd);
	return 0;
}
