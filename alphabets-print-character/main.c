#include<stdio.h>
int main()
{
char ch;
printf("enter character:");
scanf("%c",&ch);
if(ch>'0'&&ch<='9')
{
printf("you are enter:number");
}
else if(ch>='a'&&ch<='z')
{
printf("you are enter the:character");
}
else if(ch>='A'&&ch<='Z')
{
printf("you are enter the:alphabets");
}
return 0;
}