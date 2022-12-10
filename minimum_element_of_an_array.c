#include<stdio.h>
int main()
{
    int a[100],min,i,l=0,size;
    scanf("%d",&size);
    for(i=0;i<size;i++)
    scanf("%d",&a[i]);
    min=a[0];
    for(i=1;i<size;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
            l=i+1;
        }
    }
    printf("%d
",min);
    return 0;
}