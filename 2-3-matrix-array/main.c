#include<stdio.h>
int main()
{
int a[2][3];
printf("enter array elements:");
for(int i=0;i<2;i++)
{
for(int j=0;j<3;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("array 2*3:\n");
printf("\n");
for(int i=0;i<2;i++)
{
for(int j=0;j<3;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
}
return 0;
}