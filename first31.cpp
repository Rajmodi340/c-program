#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n,*ptr;
    ptr=(int*)calloc(n,sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",ptr+i);
    }
    for(i=0;i<n;i++)
    {
        printf("%d\n",*(ptr+i));
        free(ptr);
    }
}