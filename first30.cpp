#include<stdio.h>
#include<conio.h>
int strlen(char str[]);
int main()
{
char str[20];
int j;
printf("enter the string");
gets(str);
j=strlen(&str[0]);
printf("%d",j);
}
int strlen(char str[])
{
    int i=0;
    while (str[i]!='\0')
    {
        i++;
    }
     return i;   
    }
    
