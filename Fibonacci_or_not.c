#include<stdio.h>
int main()
{
    int i,n,n1,n2,n3;
    scanf("%d",&n);
    n1=0;
    n2=1;
    for(i=1;i<=n+5;i++)
    {
        n3=n1+n2;
        if(n3==n)
        {
            printf("True");
            break;
        }
        n1=n2;
        n2=n3;
    }
    if(n!=n3)
    {
        printf("False");
    }
}