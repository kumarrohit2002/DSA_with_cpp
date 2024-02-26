#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(){
	FILE *fp;
	fp=fopen("abc.txt","a");
	char ch;
	while(1){
		ch=getchar();
		if(ch=='.') break;
		fputc(ch,fp);
		
	}
	return 0;
}
