#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[100];
    puts("eneter string\n");
    gets(str1);
    strcpy(str2,str1);
    strrev(str2);
	if(strcmp(str1,str2)==0)
	printf("is a palindrome");
	else
	printf("is naat a palindrome");
}
