#include<iostream>
#include<cmath>
using namespace std;
int playedvolleyball(string year,int holidays,int weekends);
main()
{
string year;
int holidays;
int weekends;
cout<<"enter the year is it leap or normal:";
cin>>year;
cout<<"enter the number of holidays:";
cin>>holidays;
cout<<"enter the number of weekends:";
cin>>weekends;
float totalplayed=playedvolleyball(year,holidays,weekends);

}
int playedvolleyball(string year,int holidays,int weekends)
{
    
     float sofiaTravel;
    float playingTime;
    float totalPlayingtime;

    sofiaTravel = 48 - weekends;
    playingTime = (3*(sofiaTravel/4)) + (2*(holidays/3));
    totalPlayingtime = playingTime + weekends;
    if (year == "leap")
    {
      totalPlayingtime=((totalPlayingtime*15)/100) + totalPlayingtime;
      cout <<floor(totalPlayingtime);
    }
    if (year == "normal")
    {
      cout << floor(totalPlayingtime);
    }

    return totalPlayingtime;
}