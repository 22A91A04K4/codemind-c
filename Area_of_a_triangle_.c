#include<stdio.h>
float c(float p,float q)
{
    int s;
    s=(p*q)/2.0;
    return s; 
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int x1=c(a,b);
    printf("%d",x1);
}