#include<stdio.h>
#include<math.h>
void ci(float p,float q,float r)
{
    float ci;
    ci=p*pow((1+q/100),r)-p;
    printf("%0.2f",ci);
}
void ci(float p,float q,float r);
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    ci(a,b,c);
}
