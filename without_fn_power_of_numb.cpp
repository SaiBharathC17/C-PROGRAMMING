#include<stdio.h>
#include<conio.h>

int main()
{
	int base,exp,i,result=1;
	printf("ENTER THE BASE\n");
	scanf("%d",&base);
	printf("ENTER THE EXPONENT\n");
	scanf("%d",&exp);
	for(i=1;i<=exp;i++)                                                /* logic explanation */   //did using for loop. 
	{                                                             // eg: 2^3
		result*=base;                                  //result=1*base(2)=2 //result=2*2=4  //result=4*2=8
	}
	printf("THE NUMBER %d POWER %d is:   %d\n",base,exp,result);
	return 0;
	
	
}
