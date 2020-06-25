#include<stdio.h>
#include<string.h>
int main()
{
	
	char a[100],b[100];
	printf("enter 1st string:\n");
	gets(a);
	printf("enter 2nd string:\n");
	gets(b);
		
	if(strcmp(a,b)==0)
	printf("the given strings equal:\n");
	else
	printf("the given strings are not equal:\n");
	return 0;
}
