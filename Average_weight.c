#include<stdio.h>
void d(int a,int b,int c);
int main()
{
  int a,b,c;
  scanf("%d%d%d",&a,&b,&c);
  d(a,b,c);
}
void d(int a,int b,int c)
{
    int d;
    d=(3*a-b-c);
    printf("%d",d);
}