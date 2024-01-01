#include<stdio.h>
#include<string.h>
int main()
{
//char ch[11]={'e','x','p','o','n','e','n','t','\0'};
char ch[10]="Training";
char ch2[11]="exponent";
printf("char array value is:%s\n",ch);
printf("string literal value is:%s\n",ch2);
printf("length of string is:%ld\n",strlen(ch));
strcat(ch,ch2);
printf("value of first string is:%s\n",ch);
char ch3[20];
strcpy(ch3,ch);
printf("value of seccond string is:%s\n",ch3);
char ch4[10]="exponenttraining";
printf("\n compare:%d",strcmp(ch4))
return 0;
}