#include<stdio.h>
int main()
{
    int h,spin,s;
    scanf("%d%d%d",&h,&spin,&s);
    if(h>50 && spin>60 && s>100)
    {
        printf("10");
    }
    else if(h>50 && spin>60)
    {
        printf("9");
    }
    else if(spin>60 && s>100)
    {
        printf("8");
    }
    else if(h>50 && s>100)
    {
        printf("7");
    }
    else if(h>50 || spin>60 || s>100)
    {
        printf("6");
    }
    else
    {
        printf("5");
    }
}    