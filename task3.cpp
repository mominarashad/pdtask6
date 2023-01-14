#include<iostream>
using namespace std;
string checktitle(char gender,int age);
main()
{
    char gender;
    int age;
    cout<<"enter the gender:";
    cin>>gender;
    cout<<"enter the age:";
    cin>>age;
    string gendercheck=checktitle(gender,age);
    cout<<"the checktitle is.."<<gendercheck<<endl;

}
string checktitle(char gender,int age)
{
    string result;
    if(gender=='m'&& age>=16)
    {
        result="mr.";
    }
    else if(gender=='m' && age<16)
    {
        result="master";
    }
    else if(gender=='f' && age>=16)
    {
        result="ms.";
    }
    else if(gender=='f' && age<16)
    {
        result="miss";
    }
    else
    {
        result="invalid";
    }
    return result;
}