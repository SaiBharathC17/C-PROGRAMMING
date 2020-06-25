#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char a[20];
	int i=0,count=0;
	printf("ENTER THE STRING:  ");
	gets(a);
	strlwr(a);
	while(a[i] !='0')
	{
		if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u')
		{
		printf(" \n %c is a vowel ",a[i]);
		count=count+1;
	    }
	    i++;
	}
	printf("\nTHE NUMBER OF VOWELS IS : %d",count);
	return 0;
}
