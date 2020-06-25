#include<stdio.h>
#include<conio.h>
int main()
{
	int i;
	int a[5]={1,2,3,4,5};
    int b[5];
    for(i=0;i<5;i++)               //copying a array elemets to b array
    {
    	b[i]=a[i];
	}
	// print elemts of b array
	printf("B ARRAY ELEMETS: " );
	 for(i=0;i<5;i++)               
    {
    	printf("%d ",b[i]);
	}	
	return 0;
}
