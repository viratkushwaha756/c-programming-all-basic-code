#include<stdio.h>
int main()
{
int a[8]={6,8,9,4,40,30,50,45};
int max=a[0];
for(int i=0;i<8;i++)
{
if(a[i]>max)
{
max=a[i];
}
}
printf("maximum no.is%d",max);
return 0;
}
