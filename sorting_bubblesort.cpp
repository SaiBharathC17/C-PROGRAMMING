#include<stdio.h>
#include<conio.h>                             //to sort array using bubble sort(ascending order)
int main()                                     //for descending order ,just change the confition if(<)
{
	int i,j,t;
	int a[6]={7,3,9,2,5,1}; //can also get array frm user
	for(i=0;i<6-1;i++)                                              //outer loop(i): to store sorted elements
	{
		for(j=0;j<6-1-i;j++)                                        	//inner loop(j):to compare each neighbour elememt and swap 
		{
			if(a[j]>a[j+1])
			{
				t=a[j];                                    //swapping index pos.
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	for(i=0;i<6;i++)                                        //printing sorted i loop array
	{
	printf("%d ",a[i]);
    }
	return 0;
	
}
