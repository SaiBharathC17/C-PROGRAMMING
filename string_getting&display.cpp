#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char str1[30],str2[30],str3[30];
	printf("\nENTER THE 1st STRING:  ");
	gets(str1);
	printf("\nENTER THE 2nd STRING:  ");
	gets(str2);
    printf("\nENTER THE 3rd STRING:  ");
	gets(str3);

	printf("THE ENTERED WORDS ARE %s %s %s\n",str1,str2,str3);
	return 0;
}

