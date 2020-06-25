#include<stdio.h>                   //2 gp(geometric) series combo        *2,*3          // a/2,b/3
#include<conio.h>
int main()
{
	int i,n,a=1,b=1;
	printf("WHAT TERM?");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2!=0)               //odd a series
		{
			a=a*2;
			printf("%d ",a);
		}
		else                     //even b series
		{
			b=b*3;
			printf("%d ",b);
		}
	}
	if(n%2!=0)                      //if user gives odd term
	{
		printf("\nTHE %d term of the series is %d",n,a/2);
	}
	else
	{
		printf("\nthe %d term of the series is %d",n,b/3);
	}
	return 0;
}
