#include<stdio.h>
int main()
{
	int i=100000,w,d,p,c,chance=0;
	printf("\nWELCOME TO CSB's ATM");
	while(chance<=2)
	{
	   printf("\n ENTER PIN :");
	   scanf("%d",&p);
	   if(p==1234)
	{
		printf("pin matched\n");
			printf("\n1.withdraw\n 2.deposit\n 3.exit");
		printf("\n enter choice");
		scanf("%d",&c);
		switch(c)
	{
		case 1:
			printf("\nenter amount to withdraw");
			scanf("%d",&w);
			if(i<w)
			{
				printf("\nno sufficient amount in account");
			}
			else
			{
			i=i-w;
			printf("\namount withdrawn is %d",w);
			printf("\nremaining balance is %d",i);
		   }
			break;
		case 2:
			printf("\nenter amount to deposit");
			scanf("%d",&d);
			i=i+d;
			printf("\namount deposited is %d",d);
			printf("\nacc balance is %d",i);
			break;
		case 3:
			printf("thank you\n");
		    break;
		default:
			printf("invalid choice\n");
			break;
	}
}
	else
	{
		chance++;
		printf("\n PIN MISMATCHED\n");
		printf("\n %d chances used out of 3\n",chance);
		while(chance>2)
		{
		
			printf("\nYOU  ARE  THIEF  MESSAGE  SENT  TO  POLICE  STATIONS   AND   ATM   DOOR   LOCKED   HAHAHAHAH......... :) :) :) !");
			
        }

	}
}
return 0;

}
