#include<stdio.h>
#include<conio.h>
int main()
{
	int a[4][4],i,j,result[4][4];                                                 //i,j for looping (index)pos
	//getting A matrix
	printf("ENTER THE A MATRIX:\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("ENTER THE a[%d][%d] ELEMENT OF A MATRIX: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	//displaying entered A matrix
	printf("THE ENTERED MATRIX A IS :\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	//calc the result matrix
		for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			result[i][j]=a[j][i];
		}
	
	}
	//print the result matrix
	printf("THE TRANSPOSED A^T(result) MATRIX IS:\n");
			for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d ",result[i][j]);
		}
		printf("\n");
	
	}
	
	return 0;
}
