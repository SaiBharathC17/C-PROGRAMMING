#include<stdio.h>
#include<conio.h>
int main()
{
	int i;
	
	int a[5]={1,2,3,4,5};
	printf("EVEN INDEX ELEMENTS: ");
	for(i=0;i<=4;i++)
	{
		printf("%d ",a[i]);
		
	}
	printf("\nODD INDEX ELEMETS: ");
	for(i=1;i<=4;i++)
	{
		printf("%d ",a[i]);
		i++;
	}
	return 0;
}
