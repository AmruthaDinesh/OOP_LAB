#include<iostream>
using namespace std;


class Date
{



 public:
 int day,month,year;
 Date()
 {
 day=19;
 month=7;
 year=2000;
 }
 
 Date (const Date &D1)
 {
 
 day=D1.day;
 month=D1.month;
 year=D1.year;
 }
 
 void enter_date()
 {
 cout<<"\nEnter day";
 cin>>day;
 cout<<"\nEnter month";
 cin>>month;
 cout<<"\nEnter year";
 cin>>year;
 }
 
 void display_date()
 {
 
 cout<<" date is "<<day<<"/"<<month<<"/"<<year;
 
 }
 
 int leap_year()
 {
 if (((year%4==0)&&(year%100!=0))||(year%400==0))
 return 1;
 else
 return 0;
 
 }

int check_month()
{
if(month>=1 && month<=12)
return 1;
else
return 0;
}

int check_day()
{

if (month==2)
{
if(leap_year()==1)
{
if(day<=29)
return 1;
else
return 0;
}
else
{
if(day<=28)
return 1;
else
return 0;

}
}
else if((month==1)||(month==3)||(month==5)||(month==7)||(month==8)||(month==10)||(month==12))
{
if(day<=31)
return 1;
else
return 0;
}

else
{
if(day<=30)
return 1;
else
return 0;
}


}

int whole_check()
{
if((this->check_month()==1)&&(this->check_day()==1))
return 1;
else
return 0;

}

Date nextdate(Date D1)
{
Date D_next=D1;
D_next.day++;
if(D_next.whole_check()==1)
{
return D_next;
}
else
{
D_next.month++;
D_next.day=1;

if(D_next.whole_check()==1)
{
return D_next;
}
else
{
D_next=D1;
D_next.year++;
D_next.month=1;
D_next.day=1;
return D_next;

}
}



}


};




int main()
{
Date D;
int choice,ch;
do
{
cout<<"press:\n1--to enter date\n2--to display entered date\n3--to check for validity of the entered date \n4--to display the next date";
cin>>choice;
switch(choice)
{
case 1:
D.enter_date();
break;

case 2:
D.display_date();
break;

case 3:
if(D.whole_check()==1)
cout<<"Yes,the date is valid";
else
cout<<"The date is not valid";

break;

case 4:
if(D.whole_check()==1)
{
Date D_N=D.nextdate(D);
D_N.display_date();
}
else
{
cout<<"Please Enter a valid date to check";
}
break;

default:
cout<<"\n\n Invlid option selected";

}
 cout<<"Press 1 to continue : ";
 cin>>ch;

}while(ch==1);


return 0;
}
