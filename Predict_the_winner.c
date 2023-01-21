#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,x=0,y=0,d;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(i%2)
        y+=arr[i];
        else
        x+=arr[i];
    }
    d=abs(x-y);
    if(d%4==0)
    printf("X");
    else
    printf("Y");
}