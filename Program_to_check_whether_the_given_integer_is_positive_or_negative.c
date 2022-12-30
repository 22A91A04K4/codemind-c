#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n>0)
    {
        printf("Positive Number");
    }
    else if(n==0)
    {
        printf("Neither Positive Nor Negative");
    }
    else
    {
        printf("Negative Number");
    }
}