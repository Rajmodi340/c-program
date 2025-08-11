#include<stdio.h>
#include<math.h>
int main()
{
int r,i,a,sum=0,n1;
for(i=1;i<=100;i++)
{
  a=i;
  n1=a;
  while(a!=0)
  {
    r=a%10;
    sum=sum+r*r*r;
    a=a/10;
  }
  if(sum==i)
  printf("%d",sum);
}

return 0;
    }
