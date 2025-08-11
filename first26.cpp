#include<stdio.h>
int main()
{
    int i,n,a[20],b[20],sum[20];
    scanf("%d",&n);
   
    for(i=0;i<n;i++)
    {
        printf("a[%d]",i);
        scanf("%d",&a[i]);
    }
     for(i=0;i<n;i++)
    {
        printf("b[%d]",i);
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++)
    {
sum[i]=a[i]+b[i];
printf("\nsum[%d]=%d",i,sum[i]);
    }
return 0;
}
