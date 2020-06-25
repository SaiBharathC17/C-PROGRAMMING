#include<stdio.h>              //program to calc sum of all number div by 3 and 5 between given range m and n;
#include<conio.h>  //use function
int calculate(int,int);         //fn decl
int main()
{
	int m,n,sum;
	printf("ENTER STARTING NUMB: ");
	scanf("%d",&m);
	printf("\nENDING END NUMB:  ");                //sum of all nos div by 15 betn m and n;
	scanf("%d",&n);
/*90*/sum=calculate(m,n);     //calculate(12,50)                           //fn call
	printf("\nTHE SUM IS %d",sum);
	return 0;
}              //12   50
int calculate(int m,int n)                          //fn defn
{
	int i,sum=0;
	   //12    50
	for(i=m;i<=n;i++)
	{      
	    //12,13,14.....50
		if(i%15==0)                                             
		{ //15,30,45
		  	sum=sum+i;
		}
	}
	return sum;    //15+30+45=90
}
