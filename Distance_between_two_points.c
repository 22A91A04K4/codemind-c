#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    float x;
    x=((c-a)*(c-a)+(b-d)*(b-d));
    printf("%.4f",sqrt(x));
}