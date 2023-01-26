#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int getFirstDayOfTheYear(int year)
{
    int day=(year*365+((year-1)/4)-((year-1)/100)+((year-1)/400))%7;
    return day;
}
int main()
{
    int year,i,j,total_day,week_day=0,space_counter=0;
    cout<<"Enter your favourite year:";
    cin>>year;
    cout<<"*****************Welcome to year "<<year<<"*****************\n\n";

    string month[12]={"January","Februay","March","April","May","June","July","August","September","October","November","December"};
    int month_day[12]={31,28,31,30,31,30,31,31,30,31,30,31};


    if(year%4==0 && year%100!=0 || year%100==0)
    {
        month_day[1]={29};
    }
    week_day=getFirstDayOfTheYear(year);


    for(i=0;i<12;i++)
    {
        cout<<"\n\n------------------"<<month[i]<<"-------------------"<<endl;
        cout<<"\nSun   Mon   Tue   Wed   Thu    Fri    Sat"<<endl;
        for(space_counter=0;space_counter<week_day;space_counter++)
        {
            cout<<"      ";
        }
        total_day=month_day[i];
        for(j=1;j<=total_day;j++)
        {
          cout<<setw(3)<<j<<"   ";
          week_day++;
          if(week_day>6)
          {
              week_day=0;
              cout<<"\n";
          }
        }
    }


    getch();
}
