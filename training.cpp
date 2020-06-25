#include<stdio.h>
#include<conio.h>
int greatestarr(int b[],int n);
void disp(int c[],int n);
int main()
{
	int a[100],n,i,result;
	printf("How many elements?");
	scanf("%d",&n);
	printf("\nEnter %d elements:",n);
	for(i=1;i<=n;i++)
	{
		printf("\nEnter %d element: ",i);
		scanf("%d",&a[i]);
	}
	result=greatestarr(a,n);       //a is array  //n is sizze given by user
	printf("The greatest element is %d",result);
	return 0;
	
}
int greatestarr(int b[],int n)                 //passed n also as this scope doesnt know whats n
{
	int greatest,i;
     greatest=b[1];
     for(i=1;i<=n;i++)
     {
     	if(b[i]>=greatest)
     	{
     		greatest=b[i];
		 }
	 }
	 return greatest;	 
}

