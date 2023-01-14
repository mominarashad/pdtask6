 #include<iostream>
using namespace std;
float moneyleft(float budget,string category,int people);
main()
{
    float budget;
    string category;
    int people;
    cout<<"enter the budget:";
    cin>>budget;
    cout<<"enter the category:";
    cin>>category;
    cout<<"enter the number of people:";
    cin>>people;
   float output=moneyleft(budget,category,people); 
   cout<<"the output is"<<output<<endl;


}

float moneyleft(float budget,string category,int people)
{

  float result;
  float amount;
  if(people>=1 && people<=4)
  {result=budget-(0.75*budget);}
  if(people>=5 && people<=9)
  {result=budget-(0.60*budget);}
  if(people>=10 && people<=24)
  {result=budget-(0.50*budget);}
  if(people>=25 && people<=49)
  {result=budget-(0.60*budget);}
  if(people>50)
  {result=budget-(0.25*budget); }
{

  if(category=="Normal")
{
    if(result>=(249.99*people))
    {
    amount=result-(249.99*people);
    cout<<"YES!YOU HAVE"<<amount<<"QR left"<<endl;
    }
  else if(result<(249.99*people))
   {
    amount=(249.99*people)-result;
     cout<<"NO! YOU DONT HAVE MONEY,YOU NEED"<<amount<<"money"<<endl;
   }
   return amount;
}
  if(category=="VIP")
{
    if(result>=(499.99*people))
  {
    amount=result-(499.99*people);
    cout<<"YES!YOU HAVE"<<amount<<"QR left"<<endl;
  }
  else if(result<(499.99*people))
  {
    amount=(499.99*people)-result;
     cout<<"NO! YOU DONT HAVE MONEY,YOU NEED"<<amount<<"money"<<endl;
  }
  return amount;
}
return 0;
}
}
      

 
