#include<stdio.h>
void c(int p,int q);
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    c(a,b);
}
void c(int p,int q)
{
    int c,d;
    c=p;d=q;
    p=q;p=q;
    p=d;p=c;
    printf("%d
%d",d,c);
    }