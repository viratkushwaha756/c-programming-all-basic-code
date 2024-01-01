#include<stdio.h>
#include<string.h>
struct student
{
int rollno;
int maths;
int phy;
int comp;
char name[10];
};
void main()
{
int i;
struct student st[5];
printf("enter record of 5 students");
for(i=0;i<5;i++)
{
printf("\n enter rollno:");
scanf("%d",&st[i].rollno);
printf("\n enter name:");
scanf("%s",st[i].name);
printf("\nenter the marks of maths:");
scanf("%d",&st[i].maths);
printf("\nenter the marks of phy:");
scanf("%d",&st[i].phy);
printf("\nenter the marks of comp:");
scanf("%d",&st[i].comp);
}
printf("\nstudent information list:");
for(i=0;i<5;i++)
printf("\nrollno=%d,name:%s:maths=%d:phy=%d:comp=%d",st[i].rollno,st[i].name,st[i].maths,st[i].phy,st[i].comp);
}
