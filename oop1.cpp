#include<iostream>
using namespace std;
class Date
{
int date,month;
long int year;
public:
void enter()
{
cout<<"\nEnter the date,month(as number),and the year";
cin>>date>>month>>year;
}
void display()
{
cout<<"\nDisplaying the next date";
cout<<date<<"/"<<month<<"/"<<year;
}
int check();
void update();
};
int Date::check()
{
  if(month==2)
 { 
    if((year%4==0)&&(year%100!=0)||(year%400==0))
    {
    if(date>29)
      {
        cout<<"Invalid date";
          return 1;
      } 
      }
    else if(date>28)
     {
       cout<<"Invalid date";
          return 1;
      }
   
 }
 
 else if((month==4)||(month==6)||(month==9)||(month==11))
   {
     if(date>30)
    {
   cout<<"Invalid date";
   return 1;
    } 
   }
 else if(date>31)
 {
 cout<<"Invalid date";
   return 1;
 } 
 
 
 return 0;
  
}
void Date::update()
{
if((month==2)&&(date==28))
{
month++;
date=1;
}
else if(((month==4)||(month==6)||(month==9)||(month==11))&&(date==30))
{
month++;
date=1;
}
else if((date==31)&&(month==12))
{
year++;
month=1;
date=1;
}
else if(date==31)
{
month++;
date=1;
}
else
{
date++;
}
}
int main()
{
Date DJ;
int p;

DJ.enter();
p=DJ.check();
if(p==0)
{
DJ.update();
DJ.display();
}
cout<<"Thank you!";
return 0;

}
