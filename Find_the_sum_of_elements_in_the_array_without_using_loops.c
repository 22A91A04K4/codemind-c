#include<stdio.h>
int main()
{
    int n,i,arr[100],s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    i=0;
    start:
    if(i<n)
    {
        s+=arr[i];
        i++;
        goto start;
    }
    printf("%d",s);
}