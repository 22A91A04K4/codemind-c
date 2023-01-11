#include<stdio.h>
#include<math.h>
int main()
{
    int i,a,b;
    float rt,s=0.0;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        rt=sqrt(i);
        s+=rt;
    }
    printf("%.2f",s);
}