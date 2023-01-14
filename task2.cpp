#include<iostream>
using namespace std;
float payableamount(string day,string month,int totalamount);
main()
{
    string day;
    string month;
    int totalamount;
    cout<<"enter the total amount:";
    cin>>totalamount;
    cout<<"enter the day:";
    cin>>day;
    cout<<"enter the month:";
    cin>>month;
    int result=payableamount(day,month,totalamount);
    cout<<"the amount after discount is.."<<result<<endl;

}
float payableamount(string day,string month,int totalamount)
{
    int discount;
    if(day=="sunday" && (month=="october" || month=="march"|| month=="august"))
     {
        
            discount=totalamount-(0.10*totalamount);
     }
        
 
    else if(day=="monday" &&( month=="november"|| month=="december"))
   {
        discount=totalamount-(0.5*totalamount);

   }
   else
   {
    discount=totalamount;
   }
   return discount;
}
