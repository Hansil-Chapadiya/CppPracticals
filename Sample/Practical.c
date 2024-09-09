#include<stdio.h>
#include<stdlib.h>
void main()
{
	FILE  *fp1,*fp2;
	char c,s, name[20];
	printf("Enter File name:: ");
	scanf("%s",name);
	fp1 = fopen(name,"r");
	if(fp1 == '\0'){
		printf("File is doesn't exit");
		exit(0);
	}
	fp2 = fopen("MHA2.txt","w");
	while((c=getc(fp1)) != EOF){
		putc(c,fp2);
		putchar(c);
	}
	fclose(fp2);
	fclose(fp1);
}