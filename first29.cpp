#include<stdio.h>
int main()
{
    int l,i;
    char str[25];
    scanf("%s",str);
for(i=0;i<l/2;i++)
{
    if(str[i]!=str[l-1-i])
    {
        printf("string is not pallindrone");
    break;
    }
}
    if(i==l/2)
    {
        printf("string is pallindrone");
    }
    return 0;
}