// write a program for armstrong number 
#include<stdio.h>
int main()
{
int n,r,sum=0,temp;
printf("enter any number is:");
scanf("%d",&n);
temp=n;
while(n>0)
{
r=n%10;
sum=sum+r*r*r;
n=n/10;
}
printf("sum=%d",sum);
if(temp==sum)
{
printf("\tnumber is armstrong");
}
else
{
printf("number is not armstrong");
}
return 0;
}