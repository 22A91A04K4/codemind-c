#include<stdio.h>
float area(float r)
{
    float s;
    s=3.14*r*r;
    return  s;
}
int main()
{
    float a;
    scanf("%f",&a);
    float x1=area(a);
    printf("%.2f",x1);
}