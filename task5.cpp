#include<iostream>
using namespace std;
float totalincome(string screening,int rows,int column);
main()
{
    string screening;
    int rows;
    int column;
    cout<<"enter the type of screening:";
    cin>>screening;
    cout<<"enter the number of rows:";
    cin>>rows;
    cout<<"enter the number of column:";
    cin>>column;
    float income=totalincome(screening,rows,column);
    cout<<"total income is .."<<income<<endl;

}
float totalincome(string screening,int rows,int column)
{
    float result;
    
    if(screening=="premiere")
    {
        result=rows*column*12;
    }
    else if(screening=="normal")
    {
        result=rows*column*7.50;
    }
    else if(screening=="discount")
    {
        result=rows*column*5;
    }
    
    return result;
}