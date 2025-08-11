#include<stdio.h>
int main()
{
int item,n,i,a[20],j,temp,min;
 scanf("%d",&n);
 
    for(i=0;i<n;i++)
    {
        printf("a[%d]",i);
        scanf("%d",&a[i]);
    }
for(i=0;i<n;i++)
{
    min=i;

for(j=i+1;j<n;j++)
{
    if(a[j]<a[min])
    {
    min=j;
}
temp=a[i];
a[i]=a[min];
a[min]=temp;
}
}
for(i=0;i<n;i++)
{
    printf("\na[%d]=%d",i,a[i]);
}
return 0;
}