#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char a[20],b[20];
    printf("ENTER THE STRING:  ");
    gets(a);                                           //getting a
    strcpy(b,a);                                          //cpy a to b
    strrev(b);                                           //reverse b
    if(strcmp(a,b)==0)                                     //compare a and b(reverse of a)
    {
    printf(" %s is a PALINDROME",a);
    }
    else
    {
    	printf(" %s is naat a palindrome",a);
	}
    return 0;
}
