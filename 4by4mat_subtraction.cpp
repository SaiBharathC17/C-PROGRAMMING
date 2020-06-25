#include<stdio.h>
#include<conio.h>
int main()
{
	int a[4][4],b[4][4],k[4][4];                                                                 //a is 1st mat, b is 2nd mat  //k is result mat
	int i,j;
	for(i=0;i<4;i++)                                                      //for 2d array alone use in for loop i=0;i<4;i++ always
	{                                                                     //i=0,1,2,3
		for(j=0;j<4;j++)                                                      //j=0,1,2,3
		{
			printf("ENTER THE a[%d][%d] ELEMENT OF MATRIX:  ",i,j);
			scanf("%d",&a[i][j]);
		}
		}
		printf("THE ENTERED A MATRIX  IS:\n");
		for(i=0;i<4;i++)                                                      //for 2d array alone use in for loop i=0;i<4;i++ always
	{
		for(j=0;j<4;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
		 }	
		 	for(i=0;i<4;i++)                                                      //for 2d array alone use in for loop i=0;i<4;i++ always
	{                                                                     //i=0,1,2,3
		for(j=0;j<4;j++)                                                      //j=0,1,2,3    
		{
			printf("ENTER THE b[%d][%d] ELEMENT OF MATRIX:  ",i,j);             //GETTING SAME B MATRIX(COPY PASTE A MATRIX CODE AND CHANGE THE VAR TO B ALONE                 
			scanf("%d",&b[i][j]);
		}
		}
		printf("THE ENTERED B MATRIX  IS:\n");
		for(i=0;i<4;i++)                                                      //for 2d array alone use in for loop i=0;i<4;i++ always
	{
		for(j=0;j<4;j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
		 } 
		 //result matrix k
		 printf("THE SUM K MATRIX IS:\n ");
		 for(i=0;i<4;i++)                                                      
	{
		for(j=0;j<4;j++)
		{   
		    k[i][j]=a[i][j]-b[i][j];
			printf("%d ",k[i][j]);
			k[i][j]=0;                                                                       //just for refreshing
		}
		printf("\n");
		 } 
    return 0;
}
