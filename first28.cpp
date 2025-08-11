#include<stdio.h>
int main()
{
    int a[20][20],b[20][20],c[20][20],r1,c1,c2,r2;
    printf("enter the row and column of matrix");
scanf("%d%d",&r1,&r2);
scanf("%d%d",&c1,&c2);
if(r2!=c1)
{
    printf("multiplication is not possible");
}
else{
    printf("enter the first matrix");
}
for(int i=0;i<r1;i++)
{
    for(int j=0;j<c1;j++)
{
printf("a[%d][%d]",i,j);
scanf("%d",&a[i][j]);
}
printf("\n");
}
printf("enter the second matrix");
for(int i=0;i<r2;i++)
{
    for(int j=0;j<c2;j++)
{
printf("b[%d][%d]",i,j);
scanf("%d",&b[i][j]);
}
printf("\n");
}
printf("multiplication of two matrix");
for(int i=0;i<r1;i++)
{
    for(int j=0;j<c2;j++)
{
c[i][j]=0;
for(int k=0;k<c1;k++){
    c[i][j]=c[i][j]+a[i][k]*b[k][j];
}
}
}
printf("resultant matrix");
for(int i=0;i<r1;i++)
{
    for(int j=0;j<c2;j++)
{
    printf("%d\t",c[i][j]);
}
printf("\n");
}

return 0;
}