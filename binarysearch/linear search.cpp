#include<stdio.h>
int main(){
	int a[]={1,2,3,4,5};
	int key=5;
	int i=0;
	for(i=0;i<=4;i++){
		if(a[i]==key){
			break;
		}
		}
		if(i==5) printf("not found");
		else printf("found %d",i);
	return 0;
}
