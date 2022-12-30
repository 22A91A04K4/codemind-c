#include<stdio.h>
int main()
{
    char ab;
    scanf("%c",&ab);
    if(ab=='a' || ab=='e' || ab=='i' || ab=='o' || ab=='u' || ab=='A' || ab=='E' || ab=='I' || ab=='O' || ab=='U')
    {
        printf("Vowel");
    }
    else
    {
        printf("Consonant");
    }
}