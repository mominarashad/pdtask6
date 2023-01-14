#include<iostream>
using namespace std;
float lowestprice(int km,string periodofday);
main()
{
    int km;
    string periodofday;
    cout<<"enter the km:";
    cin>>km;
    cout<<"enter the day:";
    cin>>periodofday;
    float price=lowestprice(km,periodofday);
    cout<<"the price is"<<price<<endl;

}
float lowestprice(int km,string periodofday)
{ 
     float bill;
 {
        if(periodofday=="day"  )
    {
        bill=0.70+(0.79*km);
    }
    else if(periodofday=="night")
    {
        bill=0.70+(0.90*km);
    }
 }   
    if((km>=20) && (periodofday=="day"|| periodofday=="night"))
    {
     bill=km*0.09;
    }
   if(km>=100 && (periodofday=="day" || periodofday=="night"))
   {
    bill=km*0.06;
   }
   return bill;
}