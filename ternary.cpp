#include<stdio.h>
int main()
{
   int a,b,temp,s;
   printf("enter a and b");
   scanf("%d %d",&a,&b);
   temp=a;
   a=b;
   b=temp;
   s=b;
   printf("after swapping a=%d and b=%d and temp=%d",a,b,s);
return 0;
}
