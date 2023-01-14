#include<iostream>
using namespace std;
string checkspeed(float num);
main()
{
    float num;
    cout<<"enter the num:";
    cin>>num;
    string speed=checkspeed(num);
    cout<<"speed is.."<<speed<<endl;

}
string checkspeed(float num)
{  
    string result;
{
    if(num<=10)
    {
        result="slow";
    }
    else if(num>10 && num<=50)
    {
        result="average";
    }
    else if(num>50 && num<=150)
    {
        result="fast";
    }
    else if(num>150 && num<=1000)
    {
        result="ultrafast";
    }
}
    return result;
}