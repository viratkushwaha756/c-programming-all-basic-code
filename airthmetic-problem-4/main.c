#include<stdio.h>
int main()
{
float a,b,sum,sub,div,mult;
printf("Enter the value of a and b:");
scanf("%f%f",&a,&b);
sum=a+b;
sub=a-b;
div=a/b;
mult=a*b;
printf("Display the value of add, sub, div mult = %f,%f,%f,%f",sum,sub,mult,div);
return 0;
}
