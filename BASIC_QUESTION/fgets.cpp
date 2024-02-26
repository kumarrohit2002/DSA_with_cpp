#include<stdio.h>
#include<string.h>
int main(){
	FILE *fp;
	char s[10];
	fp=fopen("abc.txt","r");
	if(fp==NULL)
		printf("file does not exist");
	else{
		while(fgets(s,8,fp)!=NULL){
			printf("%s\n",s);
		}
	}
	
	fclose(fp);
}
