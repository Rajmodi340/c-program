//array
#include <stdio.h>
int main()
{
  int i,n,ar[10],maximum,min;
scanf("%d",&n);
for(i=0;i<=n-1;i++)
{
    printf("\nar[%d]",i);
    scanf("%d",&ar[i]);
}
maximum=ar[0],min=ar[0];

    for(i=1;i<n;i++)

{
   // maximum=ar[0];
     //for(i=0;i<=n-1;i++)
     
        if(ar[i]<min)
        {
            min=ar[i];
            
        }
        else if(ar[i]>maximum)
     {
        maximum=ar[i];
     }
            printf("maximum=%d\nmin=%d",maximum,min);
        }
   /* printf("\nar2[%d]",i);
    scanf("%d",&ar2[i]);
}
for(i=0;i<n;i++)
{


    sum[i]=ar1[i]+ar2[i];
    printf("\n%d=sum[%d]",i,sum[i]);*/

return 0;
}