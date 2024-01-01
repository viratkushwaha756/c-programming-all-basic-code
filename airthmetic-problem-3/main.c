// WRITE A Program to calculate sum,sub,multiply,div of two numbers by using float
#include<stdio.h>
int main(){
float a,b,sum,sub,multiply,div;
printf("enter a number is :");
scanf("%f%f",&a,&b);
sum=a+b;
scanf("%f%f",&a,&b);
sub=a-b;
scanf("%f%f",&a,&b);
multiply=a*b;
scanf("%f%f",&a,&b);
div=a/b;
printf("\n sum of two number is %f",sum);
printf("\n sub of two number is %f",sub);
printf("\n multiply of two number is %f ",multiply);
printf("\n divsion of two number is %f ",div);
return 0;
}