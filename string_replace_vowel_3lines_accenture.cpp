/* get 3 string in 3 diff lines . replace first sting vowels with *, replace 2nd string vowels with #, replace 3rd string vowels with '@
*/

#include<stdio.h> 
#include<conio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char a[20],b[20],c[20];
	int i=0;
	printf("ENTER 1st STRING:  ");
	gets(a);
	printf("\nENTER 2nd STRING:  ");
	gets(b);
	printf("\nENTER 3rd STRING:  ");
	gets(c);
	
	//first str vow replaced with '*'
	while(a[i] != '\0')                       //iterateing the str index until '\0'
	{
		if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' || a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O'|| a[i]=='U')
		{
			a[i]='*';                    
	    }
		i++;
	}                         //now i has value 5,i=5,now if yu put b[5] it will look for 5th letter in b.
	printf("\nTHE 1ST STRING WITH REPLACED VOWELS IS :  %s",a);
	 i=0;                      //refreshing i as it would have taken index value
	//2nd str vow replaced with '#'
	while(b[i] != '\0')                       //iterateing the str index until '\0'
	{
		if(b[i]=='a' || b[i]=='e' || b[i]=='i' || b[i]=='o' || b[i]=='u' || b[i]=='A' || b[i]=='E' || b[i]=='I' || b[i]=='O'|| b[i]=='U')
		{
			b[i]='#';                    
	}
		i++;
	}
	printf("\nTHE 2nd STRING WITH REPLACED VOWELS IS :  %s",b);
	i=0;
	
		
	//3rd str vow replaced with '@'
	while(c[i] != '\0')                       //iterateing the str index until '\0'
	{
		if(c[i]=='a' || c[i]=='e' || c[i]=='i' || c[i]=='o' || c[i]=='u' || c[i]=='A' || c[i]=='E' || c[i]=='I' || c[i]=='O'|| c[i]=='U')
		{
   			c[i]='@';                    
	}
		i++;
	}
	printf("\nTHE 3rd STRING WITH REPLACED VOWELS IS :  %s",c);
    i=0;
	printf("\nTHE CONCATENATED STRINGS IS %s %s %s",a,b,c);
	return 0;
}
