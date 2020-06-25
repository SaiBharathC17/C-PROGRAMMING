#include<stdio.h>
#include<conio.h>
int main()
{
	int a[20],i,sum=0;                                //when yur getting arr frm user can start i frm 1,
	printf("\nenter 10 array elements");                   //but when display array in program a[]={1,2,3}, use for(i=0;i<=2;i++) only
	for(i=1;i<=10;i++)
	{
	scanf("%d",&a[i]);
    }
    printf("\nthe entered elemets are");
    	for(i=1;i<=10;i++)
	{
	printf("%d",a[i]);
	sum=sum+a[i];
    }
    printf("\nthe sum is: %d",sum);
    return 0;
}
