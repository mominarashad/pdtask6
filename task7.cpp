#include<iostream>
using namespace std;
float cost(string city,string product,float quantity);
main()
{
    string city;
    string product;
    float quantity;
    cout<<"enter the city:";
    cin>>city;
    cout<<"enter the product:";
    cin>>product;
    cout<<"enter the quantity";
    cin>>quantity;
    float totalcost=cost(city,product,quantity);
    cout<<"the cost of product is"<<totalcost<<endl;

}
float cost(string city,string product,float quantity)
{
    float result;
    if(city=="sofia")
    {
        if(product=="coffee")
        {
            result=0.50*quantity;
        }
        else if(product=="water")
        {result=0.80*quantity;}
        else if(product=="beer")
        {result=1.20*quantity;}
        else if(product=="sweets")
        {result=1.45*quantity;}
        else if(product=="peanuts")
        {result=1.60*quantity;}
        return result;
    }
    if(city=="plovdv")
    {
        if(product=="coffee")
        {result=0.40*quantity;}
        else if(product=="water")
        {result=0.70*quantity;}
        else if(product=="beer")
        {result=1.15*quantity;}
        else if(product=="sweets")
        {result=1.30*quantity;}
        else if(product=="peanuts")
        {result=1.50*quantity;}
        return result;
    }
   if(city=="varna")
    {
        if(product=="coffee")
        {result=0.45*quantity;}
        else if(product=="water")
        {result=0.70*quantity;}
        else if(product=="beer")
        {result=1.10*quantity;}
        else if(product=="sweets")
        {result=1.35*quantity;}
        else if(product=="peanuts")
        {result=1.55*quantity;} 
        return result;
    }
    return 0;
}    
