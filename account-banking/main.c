#include <stdio.h>
struct customer
{
int account_no;
char name[80];
int balance;
int internet_banking;
int pin_code;
int type_acc;
};
void accept(struct customer[], int);
void display(struct customer[], int);
void customer_type(struct customer[], int, int);
void display1(struct customer[], int);
int search(struct customer[], int, int);
void display2(struct customer[], int);
void display3(struct customer[], int);
int main()
{
struct customer data[20];
int n,choice,account_no, amount, index;
printf("Banking System\n\n");
printf("Number of customer records you want to enter? : ");
scanf("%d", &n);
accept(data, n);
do
{
printf("\nBanking System Menu :\n");
printf("Press 1 to display all records.\n");
printf("Press 2 to search a record.\n");
printf("Press 3 to get the list of customers availing Internet banking facility.\n");
printf("Press 4 to know whether a customer is general,silver or golden.\n");
printf("Press 5 to get the list of customers as per account type.\n");
printf("Press 6 to sort the customers as per geographical locations.\n");
printf("Press 0 to exit\n");
printf("\nEnter choice(0-6) : ");
scanf("%d", &choice);
switch (choice)
{
case 1:
display(data, n);
break;
case 2:
printf("Enter account number to search : ");
scanf("%d", &account_no);
index = search(data, n, account_no);
if (index == - 1)
{
printf("Record not found : ");
}
else
{
printf("A/c Number: %d\nName: %s\nBalance:%d\n",data[index].account_no,
data[index].name,data[index].balance);
}
break;
case 3:
display1(data,n);
break;
case 4:
customer_type(data,n,account_no);
break;
case 5:
display3(data,n);
break;
case 6:
display2(data,n);
break;
}
}while (choice != 0);
return 0;
}
void accept(struct customer list[80], int s)
{
int i;
for (i = 0; i < s; i++)
{
printf("\nEnter data for Record #%d", i + 1);
printf("\nEnter account_no : ");
scanf("%d", &list[i].account_no);
fflush(stdin);
printf("Enter name : ");
scanf("%s",list[i].name);
printf("Enter balance : ");
scanf("%d",&list[i].balance);
printf("Have u availed internet banking facility? 0.No 1.Yes : ");
scanf("%d",&list[i].internet_banking);
printf("\nEnter pin_code ##### Note: It should be between 422001 - 422013 ##### : ");
scanf("%d", &list[i].pin_code);
printf("\nWhat type of account you have? 1. Saving 2. Recurring 3. Deposit : ");
scanf("%d", &list[i].type_acc);
}
}
void display(struct customer list[80], int s)
{
int i;
printf("\n\nA/c No\tName\tBalance\n");
for (i = 0; i < s; i++)
{
printf("%d\t%s\t%d\n", list[i].account_no, list[i].name,list[i].balance);
}
}
int search(struct customer list[80], int s, int number)
{
int i;
for (i = 0; i < s; i++)
{
if (list[i].account_no == number)
{
return i;
}
}
return - 1;
}
void customer_type(struct customer list[80],int s,int number)
{
int i;
for(i=0;i<s;i++)
{
if(list[i].balance>=1000000)
{
printf("\nThe customer named %s is a golden customer\n",list[i].name);
}
if(list[i].balance>500000 && list[i].balance<1000000)
{
printf("\nThe customer named %s is a silver customer\n",list[i].name);
}
if(list[i].balance<=500000)
{
printf("\nThe customer named %s is a general customer\n",list[i].name);
}
}
}
void display1(struct customer list[80], int s)
{
int i;
printf("\n\n\t\tList of customers availing Internet Banking Facility\t\n");
for (i = 0; i < s; i++)
{
if(list[i].internet_banking==1)
{
printf("%s \n",list[i].name);
}
}
}
void display2(struct customer list[80],int s)
{
int i, add;
printf("Enter pincode to to get members with same address : ");
scanf("%d", &add);
for(i=0 ; i< s; i++)
{
if(list[i].pin_code==add)
{
printf("%s \n",list[i].name);
}
}
}
void display3(struct customer list[80], int s)
{
int i,j,k;
printf("\n\t\tCustomers whose account type is a Savings account are as follows:\n");
for(i=0; i < s; i++)
{
if(list[i].type_acc==1)
{
printf("%s \n",list[i].name);
}
}
printf("\n\t\tCustomers whose account type is a Recurring account are as follows:\n");
for(j=0; j < s; j++)
{
if(list[j].type_acc==2)
{
printf("%s \n",list[j].name);
}
}
printf("\n\t\tCustomers whose account type is a deposit account are as follows:\n");
for(k=0; k < s; k++)
{
if(list[k].type_acc==3)
{
printf("%s \n",list[k].name);
}
}
}
