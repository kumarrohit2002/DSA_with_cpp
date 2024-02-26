#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(){
	FILE *fp;
	FILE *fp1;
	char cha;
	fp=fopen("abc.txt","r");
	if(fp==NULL) printf(" file not exit");
	else printf("file exit\n");
	char ch=fgetc(fp);
	while(1){
		printf("%c",ch);
		if(ch==EOF) break;
		ch=fgetc(fp);
	}
	while(1){
		cha=fgetc(fp);
		if(ch=='.') break;
		fputc(ch,fp2);
		
	}
	return 0;
}
