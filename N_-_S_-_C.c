#include<stdio.h>
int main()
{
    int a,b,i,n1=0,n2=0;
    scanf("%d%d",&a,&b);
    for(i=a+1;i<b;i++)
    {
        n1=i*i;
        n2=i*i*i;
       printf("%d %d %d
",i,n1,n2);
    }
    
}