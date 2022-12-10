#include<stdio.h>
int main()
{
    int a[100],max,i,l=1,size;
    scanf("%d",&size);
    for(i=0;i<size;i++)
    scanf("%d",&a[i]);
    max=a[0];
    for(i=1;i<size;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
            l=i+1;
        }
    }
    printf("%d
",max);
    return 0;
}