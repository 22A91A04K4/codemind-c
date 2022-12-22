#include<stdio.h>
int main()           
{
    int n;
    scanf("%d",&n);
    int H;
    H=n/60;
    int m;
    m=n%60;
    printf("%d Hour(s) %d Minute(s)",H,m);
}