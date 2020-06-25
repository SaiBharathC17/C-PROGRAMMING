#include<stdio.h>                   //2 multiples series combo              +7,+6                    //b-7.a-6
#include<conio.h>               // series: 0,0,7,6,14,12,21,18,28,......nth term of series
int main()
{
   int i, n, a=0, b=0;
   printf("WHAT TERM OF SERIES? : ");
   scanf("%d",&n);
  printf("\nTHE SERIES IS:");
   for(i=1;i<=n;i++)               //strting frm 7,6,14,12,...,n  //skipping 2 terms befr
   {
      if(i%2==0)          
      {              //even
           a = a + 6;
           printf("%d ",a);
      }
       else             //odd
      {    
           b = b + 7;
           printf("%d ",b);
      }
   }
      if(n%2==0)   //if askd term is even
      {
      	printf("\nTHE %d TERM OF THE SERIES IS %d",n,a-6);              //strting from 7,6,.. we get 15th term according to code but we need to incl 0,0 
	  } 
	  else   //if askd term is odd
      {
      	printf("\nTHE %d TERM OF THE SERIES IS %d",n,b-7);              //strting from 7,6,.. we get 15th term according to code but we need to incl 0,0 
	  }                                                             //so 15 -2 terms befr ..ie 13th term..foor that do -7(refr wokout)
return 0;                                                            

 }

