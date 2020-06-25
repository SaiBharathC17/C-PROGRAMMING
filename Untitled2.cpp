#include<stdio.h>
#include<string.h>
int main()
{
	
   char a[100],b[100];
   int i,c,choice;
   printf("enter 2 strings");
   gets(a);
   gets(b);
   while(i<=10)
   {
   
   printf("enter operation \n 1.cmp\n 2.concat\n 3.len\n 4.rev\n 5.lwr\n 6.upr\n");
   scanf("%d",&choice);
   switch(choice)
   {
   	case 1:
   		if(strcmp(a,b)==0)
   		printf("equal");
   		else
   		printf("naat equal");
   		break;
   	case 2:
   		strcat(a,b);
   		printf("the concated string is");
   		puts(a);
   		break;
    case 3:
    	c=strlen(a);
    	printf("the length is %d",c);
    	break;
    case 4:
    	
    	strrev(a);
    	strcpy(b,a);
    	printf("reversed is ");
    	puts(b);
    	break;
    case 5:
    	strlwr(a);
    	puts(a);
    		break;
    case 6:
    	strupr(a);
    	puts(a);
    		break;
    default:
    	printf("wrongs chpice ");
    	break;
   }
}
	return 0;
}
