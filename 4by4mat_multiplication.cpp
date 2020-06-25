#include<stdio.h>
#include<conio.h>
int main()
{     
	int a[4][4],b[4][4],result[4][4],i,j,k,sum=0;
	//getting A matrix
	printf("ENTER THE ELEMENTS OF A MATRIX OF 4*4 DIMENSION:\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
		printf("ENTER a[%d][%d] ELEMENT:  ",i,j);
		scanf("%d",&a[i][j]);
		}
	}
	//displaying A matrix elements
	printf("THE ENTERED ELEMENTS OF A MATRIX IS:\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
		//getting B matrix
	printf("ENTER THE ELEMENTS OF B MATRIX OF 4*4 DIMENSION:\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
		printf("ENTER b[%d][%d] ELEMENT:  ",i,j);
		scanf("%d",&b[i][j]);
		}
	}
	//displaying B matrix elements
	printf("THE ENTERED ELEMENTS OF B MATRIX IS:\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	//calculation of matrix multiplication using logic
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			for(k=0;k<4;k++)
			{
				sum+=a[i][k]*b[k][j];
			}
			result[i][j]=sum;
		}
	}
	//displaying the result matrix
	printf("THE MULTIPLIED RESULT MATRIX IS:\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d ",result[i][j]);
		}
		printf("\n");
	}
	printf("CONGRATS THE PROGRAM IS FULLY COMPLETED\n ");
	return 0;
}
	
	
	
	
	

