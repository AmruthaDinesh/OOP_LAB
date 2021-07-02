#include<iostream>
using namespace std;
class Time
{
int hours,min;
public:
void gettime(int h,int m)
{
hours=h;
min=m;

}

void puttime()
{
cout<<"\nHours :"<<hours;
cout<<"\nMinutes:"<<min;

}

void sum(Time t1 ,Time t2)
{
min=t1.min+t2.min;
hours=min/60;
min=min%60;

hours=hours +t1.hours+t2.hours;
}

};

int  main()
{
Time T1;
Time T2;
Time T3;
T1.gettime(2,45);
T2.gettime(3,30);
    T3.sum(T1,T2);
    cout<<"\nDisplaying T1";
    T1.puttime();
    cout<<"\nDisplaying T2";
    T2.puttime();
    cout<<"\nDisplaying T3";
    T3.puttime();
    


return 0;
}
