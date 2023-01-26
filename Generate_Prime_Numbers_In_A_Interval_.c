#include<stdio.h>
int main()
{
    int x,y,c,i;
    scanf("%d%d",&x,&y);
    for(x;x<=y;x++)
    {
        c=0;
        for(i=1;i<=x;i++)
        {
            if(x%i==0)
            {
                c++;
            }
        }
        if(c==2)
        {
            printf("%d
",x);
        }
    }
}