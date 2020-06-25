#include<stdio.h>
#include<conio.h>
int isprime(int);
int main()
{
    int ip1,ip2,i,greatestpf;
    scanf("%d %d",&ip1,&ip2);
    for(i=ip1;i>=1;i--)                 //goiong backwards since i need greatest pf
    {
        if(ip1%i==0)
        {
            if(isprime(i)==1)                 //fn call
            {
                greatestpf=i;
                break;
            }
        }
    }
    if(greatestpf<=ip2)
    {
        printf("Smooth Number");
    }
    else
    {
        printf("Not a Smooth Number");
    }
    return 0;
}
int isprime(int n)                               //is prime () code
{
    int i,count=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count=count+1;
        }
    }
    if(count==2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

