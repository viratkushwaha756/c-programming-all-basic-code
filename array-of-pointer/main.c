// array of pointer?
#include<stdio.h>
int main()
{
int arr[7]={1,2,3,4,5,6,7};
int *p=arr;
int i;
printf("printing the array element..\n");
for(i=0;i<7;i++)
{
printf(" %d ",*(p+i));
}
return 0;
}