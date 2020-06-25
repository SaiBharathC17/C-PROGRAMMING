    #include <stdio.h>
    int main()
	 {
	 	int i,j,z[3][3],y[3][3],result[3][3];
	 	 for(i=0;i<3;i++)
        {
        	for(j=0;j<3;j++)
        	{
        		printf("enter a%d%d:",i,j);
        		scanf("%d ",&z[i][j]);
			}
		}
		printf("the a matrix is :\n");
       
       for(i=0;i<3;i++)
        {
        	for(j=0;j<3;j++)
        	{
        		printf("%d ",z[i][j]);
			}
			printf("\n");
		}
			 for(i=0;i<3;i++)
        {
        	for(j=0;j<3;j++)
        	{
        		printf("enter b%d%d:",i,j);
        		scanf("%d ",&y[i][j]);
			}
		}
		printf("the b matrix is :\n");
       
       for(i=0;i<3;i++)
        {
        	for(j=0;j<3;j++)
        	{
        		printf("%d ",y[i][j]);
			}
			printf("\n");
		}

		printf("the result matrix is :\n");
       
       for(i=0;i<3;i++)
        {
        	for(j=0;j<3;j++)
        	{
        		result[i][j]=z[i][j]+y[i][j];
        		
        		printf("%d ",result[i][j]);
			}
			printf("\n");
		}
	   

   
        return 0;
    }
