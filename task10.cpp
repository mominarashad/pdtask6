#include<iostream>
using namespace std;
bool greaternumber(int num1,int num2,int num3);
main()
{
int num1,num2,num3;
cout<<"enter the number:";
cin>>num1;
cout<<"enter the number 2:";
cin>>num2;
cout<<"enter the number 3:";
cin>>num3;
bool result=greaternumber(num1,num2,num3);
cout<<"result is.."<<result<<endl;
}
bool greaternumber(int num1,int num2,int num3)
{
bool output;
if(num1==num2 && num2==num3 && num3==num1)
{output="yes";}
else if(num1!=num2 || num2!=num3 && num3==num1)
{output="no";}
else if(num1!=num2 && num2!=num3 && num3!=num1)
{output="no";}
return output;
}




