#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
int i,l;
char str[25];
gets(str);
l=strlen(str);
for(i=0;i<l/2;i++)
{
if(str[i]!=str[l-1-i]);
printf("string is not pall");
break;
}

if(i==l/2)
{
printf("yes");


}
return 0;
}