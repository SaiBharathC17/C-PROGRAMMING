#include<stdio.h>            //amstrong number
#include<conio.h>
int main()
{
	int n,r,sum=0,temp;
	printf("enter a number:");
	scanf("%d",&n);
	temp=n;                             //finally n becomes 0; 
	while(n>0)
	{
		r=n%10;
		sum=sum+(r*r*r);               //same as sum of digits of number, but only r*r*r(since  sum cube of nos)
		n=n/10;
	}   //n=0 at endd of this loop
	n=temp;                          //temp get it into n,  now n has user given vale
	if(n==sum)
	{
		printf("\n%d is an AMSTRONG number",n);
	}
	else
	{
		printf("\n%d is NOT an AMSTRONG number",n);
	}
	return 0;
}
