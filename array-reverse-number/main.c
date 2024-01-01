//4.1 Write a program to accept a number n from user and then accept n array elements from user and
//reprint them in reverse order of inputs in C language.
#include<stdio.h>
int main()
{
int n,i;
 printf("Enter number:");
 scanf("%d",&n);
int a[n];
 for(i=0;i<n;i++)
  {
    printf("Enter element %d:",i+1);
    scanf("%d",&a[i]);
  }
  printf("reversed element is:");
    for(i=n-1;i>=0;i--)
    printf("%d",a[i]);
return 0;
}



