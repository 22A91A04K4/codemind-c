#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,m,r;
    scanf("%d%d%d",&x,&y,&m);
    r=pow(x,y);
    printf("%d",r%m);
}