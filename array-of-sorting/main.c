#include<stdio.h>
int main()
{
int a[8]={1,4,5,9,2,3,10,6};
int c;
for(int i=0;i<8;i++)
{
for(int j=i+1;j<8;j++)
{
if(a[i]>a[j])
{
c=a[i];
a[i]=a[j];
a[j]=c;
}
}
}
printf("array sorting:");

for(int i=0;i<8;i++)
{
printf("%d\t",a[i]);
}
return 0;


}

