#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char a[20];
	char ch;
	int i=0;
	printf("ENTER A STRING:  ");
	gets(a);
    printf("\nREPLACE VOWELS WITH?  ");
    scanf("%c",&ch);
	
	while(a[i] != '\0')                       //iterateing the str index until '\0'
	{
		if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' || a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O'|| a[i]=='U')
		{
			a[i]=ch;                         //assigning * to vowels(can get the char from the user and also replace the same to vowels)
		}
		i++;
	}
	printf("\nTHE STRING WITH REPLACED VOWELS IS :  %s",a);
	return 0;
}
