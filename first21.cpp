#include<stdio.h>
#include<conio.h>
int main()
{
    int r1,r2,c1,c2,i,j,a[100][100],b[20][20],c[20][20];
    printf("enter the row and column\n");
scanf("%d%d%d%d",&r1,&r2,&c1,&c2);
if(r1!=r2&&c1!=c2)
{
    printf("addition not possible");
}
else{
printf("enter the first matrix element");
for(i=0;i<r1;i++)
{
    for(j=0;j<c1;j++)
    {

//("enter the element of matrix\n");
    scanf("%d",&a[i][j]);
}
printf("\n");

}
printf("enter the second matrix element");

for(i=0;i<r2;i++)
{
    for(j=0;j<c2;j++)
    {
      
scanf("%d",&b[i][j]);
}
printf("\n");
}
    printf("sum of two matrix");
    for(i=0;i<r1;i++)
{
    for(j=0;j<c1;j++)
    {

    c[i][j]=a[i][j]+b[i][j];
    }
}
for(i=0;i<r1;i++)
{
    for(j=0;j<c1;j++)
    {
        printf("%d\t",c[i][j]);
    }
    printf("\n");
}
}
return 0;
}

