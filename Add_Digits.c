#include<stdio.h>
int main()
{
    int r,n;
    scanf("%d",&n);
    begin:
    int s=0;
   	while(n>0)
	{
		r=n%10;
		n=n/10;
        s+=r;
    }
    n=s;
    if(s<10)
    {
        printf("%d",s);
    }
    else
    {
        goto begin;
    }
}