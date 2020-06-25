#include<stdio.h>
#include<conio.h>
int main()
{
	int m,n,i,r,sum=0,temp;
	printf("ENTER LOWER LIMIT: ");
	scanf("%d",&m);
	printf("\nENTER UPPER LIMIT: ");
	scanf("%d",&n);
	for(i=m;i<=n;i++)
	{
		temp=i; //vvvip                              //created this variable because,i becomes 0 at end of while loop.
		while(i>0)                            //reverse the digits of numb code
		{
			r=i%10;
			sum=(sum*10)+r;
			i=i/10;
		}
		 i=temp;//vvvip                 //thats y i used temp variable befr while loop.
		if(i == sum)  //if temp not used i would have been 0 itself. so yur comapring i==sum ie 0==11(sum)
		{
			printf("%d ",i);                           //palindrome nos,reverse and org same
		 }
		sum=0;
	}
	return 0;.
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

}
