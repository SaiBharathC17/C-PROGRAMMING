#include<stdio.h>
#include<conio.h>
int main()
{   
    int n,mult,sum=0,i;
	printf("ENTER THE NUMBER TO WHICH MULTIPLES NEED TO PRINT: ");
	scanf("%d",&n);
	printf("FIRST 10 MULTIPLES OF %d: ",n);
	for(i=1;i<=10;i++)
	{
		mult=n*i;                   //5*i(1,2...,10)
		printf("%d ",mult);
		sum=sum+mult;                 //for each iteration sum is getting added by mult
	 } 
	 printf("\nSUM OF MULTIPLES= %d",sum);   //printing sum of first 10 multiples of 5
  
    return 0;
}
