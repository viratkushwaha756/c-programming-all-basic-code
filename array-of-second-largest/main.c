#include<stdio.h>
int main()
{ 
int c,i,j;
int a[6]={1,4,5,7,8,9};
int length=sizeof(a)/sizeof(a[0]);

for (int i=0;i<6;i++)
{
for(j=0;j<6;j++)
{
if(a[i]<a[j])
{
c=a[i];
a[i]=a[j];
a[j]=c;
}
}
}
printf("array sorting");

for(int i=0;i<6;i++)
{
printf("%d\t",a[i]);
printf("\n");
}
printf("second largest:%d",a[length-2]);

return 0;

}