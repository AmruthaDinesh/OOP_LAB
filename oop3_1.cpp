/*1.Define a class Date. Overload the operator '+' such that it adds a given date with certain number of days.*/
/*By Amrutha Dinesh*/

#include<iostream>
using namespace std;
class Date
{
int day,month,year;
public:
Date()
{
day=1;
month=1;
year=2020;
}
int check();
friend Date operator +(int d, Date &D);

};

Date operator +(int d, Date &D)
{
if(month==2)
{
   if((year%4==0)&&(year%100!=0)||(year%400==0))
   {
   if((D.day+d)>29)
   {
   month++;
   D.day=d-(29-D.day);
    if(D.day>31)
    {
    month++;
    D.day=D.day-31;
    }
   }
   }

}



int Date::check()
{
  if(month==2)
 { 
    if((year%4==0)&&(year%100!=0)||(year%400==0))
    {
    if(day>29)
      {
        cout<<"Invalid date";
          return 1;
      } 
      }
    else if(day>28)
     {
       cout<<"Invalid date";
          return 1;
      }
   
 }
 
 else if((month==4)||(month==6)||(month==9)||(month==11))
   {
     if(day>30)
    {
   cout<<"Invalid date";
   return 1;
    } 
   }
 else if(day>31)
 {
 cout<<"Invalid date";
   return 1;
 } 
 
 
 return 0;
  
}
