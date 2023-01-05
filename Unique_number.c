#include<stdio.h>
int main()
{
    long int a,c=0,num,rev=0,d,p=0,j;
    scanf("%ld",&a);
    num=a;
    while(a!=0)
    {
        d=a%10;
        c++;
        a=a/10;
    }
    int b[c],i;
    i=0;
    while(num!=0)
    {
        d=num%10;
        b[i]=d;
        i++;
        num=num/10;
    }
    for(i=0;i<c;i++)
    {
        for(j=i+1;j<c;j++)
        {
            if(b[i]==b[j])
            {
                p=1;
                break;
            }
        }
    }
    if(p==1)
    {
        printf("Not Unique Number");
    }
    else
    {
        printf("Unique Number");
    }
}