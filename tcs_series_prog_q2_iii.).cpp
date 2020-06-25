#include<stdio.h>                   //2 even, prev div2 series combo       a= a+2,b=a/2          // a-2,b-1
#include<conio.h>
int main()
{
	int i,n,a=0,b=0;
	printf("WHAT TERM?");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2!=0)               //odd a series
		{
			a=a+2;
			printf("%d ",a);
		}
		else                     //even b series
		{
			b=a/2;
			printf("%d ",b);
		}
	}
	if(n%2!=0)                      //if user gives odd term
	{
		printf("\nTHE %d term of the series is %d",n,a-2);
	}
	else
	{
		printf("\nthe %d term of the series is %d",n,b-1);
	}
	return 0;
}
