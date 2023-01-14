#include<iostream>
using namespace std;
char  grade(int num);
main()
{
    int num;
    cout<<"enter the number";
    cin>>num;
    char result=grade(num);
    cout<<"the resulted grade is.."<<result<<endl;
    

}
char  grade(int num)
{   
    char gradeawarded;
    if(num<50)
    {gradeawarded='F';}
   else if(num>=50 && num<=60)
   {gradeawarded='E';}
   else if(num>=61 && num<=70)
   {gradeawarded='D';}
   else if(num>=71 && num<=80)
   {gradeawarded='C';}
   else if(num>=80 && num<=85)
   {gradeawarded='B';}
   else if(num>85)
   {gradeawarded='A';}
   return gradeawarded;
}
