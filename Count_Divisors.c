#include<stdio.h>
int main()
{
    int l,r,k,c=0;
    scanf("%d%d%d",&l,&r,&k);
    for(l;l<=r;l++)
    {
        if(l%k==0)
        {
            c++;
        }
    }
    printf("%d",c);
}