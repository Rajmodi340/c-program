#include<stdio.h>
#include<conio.h>
int main()
{
    int n,sum[10] ,i,ar1[10],ar2[10];
    scanf("%d",&n);
   

    for(i=0;i<n;i++)
    {
        printf("\nar1[%d]",i);
        scanf("%d",&ar1[i]);
    }
    for(i=0;i<n;i++)
    {
         printf("\nar2[%d]",i);
        scanf("%d",&ar2[i]);

        
    }
    for(i=0;i<n;i++)
    {
        sum[i]=ar1[i]+ar2[i];
    printf("\nsum[%d]=%d",i,sum[i]);
    }

        
return 0;
    }