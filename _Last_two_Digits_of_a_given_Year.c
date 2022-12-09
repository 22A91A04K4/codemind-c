#include<stdio.h>
int c(int p)
{
    float s;
    s=p%100;
    return s;
}    
int main()
{
    int a;
    scanf("%d",&a);
    int x1=c(a);
    printf("%.2d",x1);
}