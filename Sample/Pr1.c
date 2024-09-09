#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
	int i,n;	
	printf("Enter a  Number:: ");
	scanf("%d",&n);
	printf("No of Arguments = %d",argc);
	for(i=0;i<n;i++){
		printf("\n%s",argv[i]);
	}
	return 0;
}