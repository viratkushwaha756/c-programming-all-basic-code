#include<iostream>
using namespace std;
class A
{
protected:
int a;
public:
void getdata()
{
cout<<"enter a number is:";
cin>>a;
}
};
class B
{
protected:
int b;
public:
void inputdata()
{
cout<<"enter a number is:";
cin>>b;
}
};
class C : public A,public B
{
protected:
int c;
public:
void calculate()
{
c=a+b;
}
void putdata()
{
cout<<"addition of number is:"<<c;
}
};
int main()
{
C ob;
ob.getdata();
ob.inputdata();
ob.calculate();
ob.putdata();
return 0;
}