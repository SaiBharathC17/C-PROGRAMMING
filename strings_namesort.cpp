#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	int i,j;
	char temp[10];    //for temp 1d array enough                                //same bubble sort code, but use string inbuitlt fns
	char a[5][10]={"challa",//2d array
                    "ashok",                              //can get names frm user too
					"benson",
					"vishnu",
					"shoan"};
	for(i=0;i<5-1;i++)
	{
		for(j=0;j<5-1-i;j++)
		{
			if(strcmp(a[j],a[j+1])>0)                //comp 2 strings letter by lettyer and ret 1 if ascii of a[j]>a[j+1]
			{
				strcpy(temp,a[j]);
				strcpy(a[j],a[j+1]);
				strcpy(a[j+1],temp);
			}
		}
	}
	for(i=0;i<5;i++)
	{
	printf("%s\n",a[i]);
    }
    return 0;
   }
