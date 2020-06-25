#include<stdio.h>
#include<string.h>                              //to use string inbuilt fns
int main()
{
	
    char str1[30],str2[30];
    puts("enter 2 string:\n");
    gets(str1);
    printf("the first string is %s\n",str1);
    gets(str2);
	printf("the second string is %s\n",str2);
	if(strcmp(str1,str2)==0)
	printf("yes they equal");
	else
	printf("naaat equal");
	return 0;
}
