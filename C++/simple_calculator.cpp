#include<stdio.h>
#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<math.h>
using namespace std;
class fraction_operation
{
char arr[3];
int num[4];
public:
float result;
void input()
{
cout<<"Enter the expression"<<"\n"<<"for result press y"<<"\n";
for(int i=0,j=0;i<=2,j<=3;i++,j++)
{cin>>num[j];
cin>>arr[i];}
}
void display()
{
switch(arr[1])
{
case '+':
{result=float((num[0]*num[3])+(num[1]*num[2]))/(num[1]*num[3]);
cout<< "result is:"<<result<<"\n";
break;}
case '-':
{result=float((num[0]*num[3])-(num[1]*num[2]))/(num[1]*num[3]);
cout<<"result is:"<<result <<"\n";
break;}
case '*':
{result=float(num[0]*num[2])/(num[1]*num[3]);
cout<<"result is:"<<result <<"\n";
break;}
case '/':
{result=float(num[0]*num[3])/(num[1]*num[2]);
cout<< "result is:"<<result<<"\n";
break;}
default:
cout<<"oops try again with only 7 elements!";
break;
}
}
};
int main()
{
 fraction_operation j;
j.input();
j.display();
return 0;
}
