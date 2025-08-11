#include<stdio.h>
#include<math.h>
int main()
{
int n,count=0,i;
scanf("%d",&n);
i=1;
while(i<=n)
{
if(n%i==0)

count=count+1;

i++;
}

 if(count==2)
{
    printf("prime");
}
else
printf("not a prime");
return 0;
}