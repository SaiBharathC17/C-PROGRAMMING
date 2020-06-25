#include<Stdio.h>
#include<conio.h>
int main()
{
	int ip1,ip2,i,factor,greatestpf;
	scanf("%d %d",&ip1,&ip2);
	for(factor=2;ip1!=1;factor++)
		{
			while(ip1%factor==0)
			{
			ip1=ip1/factor;
			if(ip1==1)                             
			{
				greatestpf=factor;
			}
		   }
	   }
	if(greatestpf<=ip2)
	{
		printf("Smooth");
	}
	else
	{
		printf("Not Smooth");
	}
	return 0;
}
