#include<stdio.h>
int area(int r);
int main()
{
int r;
printf("enter any radius is:");
scanf("%d",&r);
int c=area(r);
printf("area of circle is:%d",c);
}
int area(int r)
{
int c=3.14*r*r;
return c;
}