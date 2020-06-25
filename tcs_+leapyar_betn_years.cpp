#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	for(n=2000;n<=2020;n++)                //same code only but just iterate n from 2000 to 2020.
  {
	if((n%400==0) || (n%4==0) && (n%100!=0))
	{
		printf("YES ! %d IS A LEAP YEAR",n);
	}
	else
	{
		printf("\nNO ! %d IS NOT A LEAP YEAR",n);
	}
 }
	return 0;
}
