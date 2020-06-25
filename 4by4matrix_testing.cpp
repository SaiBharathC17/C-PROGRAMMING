#include<stdio.h>
#include<conio.h>
int main()
{
	int a[4][4];
	int i,j;
	for(i=0;i<4;i++)                                                      //for 2d array alone use in for loop i=0;i<4;i++ always
	{
		for(j=0;j<4;j++)
		{
			printf("ENTER THE a[%d][%d] ELEMENT OF MATRIX:  ",i,j);
			scanf("%d",&a[i][j]);
		}
		}
		printf("THE ENTERED MATRIX IS:\n");
		for(i=0;i<4;i++)                                                      //for 2d array alone use in for loop i=0;i<4;i++ always
	{
		for(j=0;j<4;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
		 }	 
    return 0;
}
