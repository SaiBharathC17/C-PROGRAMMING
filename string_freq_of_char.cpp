#include<stdio.h>
#include<conio.h>
int main()
{
	char a[20];
	char ch;
	int i=0,count=0;
	printf("ENTER THE STRING:  ");
	gets(a);
	printf("\nWHICH CHARCTER FREQUENCY?");
	scanf("%c",&ch);
	while(a[i] != '\0')
	{
		if(a[i]==ch)
		{
			count=count+1;
		}
		i++;
	}
	printf("\nTHE FREQUENCY OF CHARACTER %c is %d",ch,count);
	return 0;
}
