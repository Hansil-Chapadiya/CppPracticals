#include<stdio.h>
#include<stdlib.h>
int main()
{

	FILE *fp;
	char ch;
	fp = fopen("D:\\Practical-8\\Practical-8.txt","r");
	while((ch=getc(fp)) != EOF){
		fseek(fp,0l,1);
		printf("%c",ch);}
	fclose(fp);
}