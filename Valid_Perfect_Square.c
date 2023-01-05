#include<stdio.h>
int main()
{
    int n,i,po,j,arr[2000],count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        count=0;
        for(j=1;j<arr[i];j++)
        {
            po=j*j;
            if(po==arr[i])
            {
             count++;   
            }
        }
        if(count>0)
        {
            printf("True
");
        }else{
            printf("False
");
        }
    }
    return 0;
}