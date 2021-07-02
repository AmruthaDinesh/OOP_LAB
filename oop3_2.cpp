/*Distance is measured in feet and inches unit. Use operator overloading for  '+' operator for adding two such distances and '<' for comparing two such distances. (one of the operator function should be implemented as friend function*/

#include<iostream>
using namespace std;

class  Distance
{
int foot,inches;
public:
Distance()
{
foot =1;
inches=5;
}
void getdistance()
{
cout<<"Enter the distance in foot :";
cin>>foot;
cout<<"Enter the distance in inches:";
cin>>inches;

}

void display()
{
cout<<"The distance is "<<foot<<"Feet"<<" "<<inches<<"inches";

}


Distance operator + (Distance D);
friend Distance operator < (Distance &D1,Distance &D2);


};

Distance Distance::operator +(Distance D)
{
Distance KM;
KM.foot=foot+D.foot;
KM.inches=inches+D.inches;
KM.foot=KM.foot+KM.inches/12;
KM.inches=KM.inches%12;
return KM;
}

Distance operator <(Distance &D1,Distance &D2)
{
if(D1.foot<D2.foot)
{
return D1;

}
else if(D1.foot==D2.foot)
{
if(D1.inches<D2.inches)
   return D1;
else
    return D2;
}
else
return D2;
}

int  main()
{
Distance Way,May;
Distance Wat,Small;

Way.getdistance();
May.getdistance();
Wat=Way+May;

cout<<"Displaying the added Distance: \n";
Wat.display();

Small=Way<May;
cout<<"Displaying the smaller distance :\n ";
Small.display();

return 0;

}


