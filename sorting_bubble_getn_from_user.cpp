#include<stdio.h>
#include<conio.h>                             //to sort array using bubble sort(ascending order)
int main()                                     //for descending order ,just change the confition if(<)
{
	int i,j,t,n;
	int a[100]; //can also get array frm user
	printf("\nHOW MANY ELEMENTS?:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nENTER a[%d] ELEMENT:",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)                                              //outer loop(i): to store sorted elements
	{
		for(j=0;j<n-1-i;j++)                                        	//inner loop(j):to compare each neighbour elememt and swap 
		{
			if(a[j]>a[j+1])
			{
				t=a[j];                                    //swapping index pos.
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	for(i=0;i<n;i++)                                        //printing sorted i loop array
	{
	printf("%d ",a[i]);
    }
	return 0;
	
}
