/*A class representing distance is measured in the unit of feet and inches. Write a program to do conversion from meter unit to objects of class type and objects of class type to meter.*/

#include<iostream>
using namespace std;
class Distance
{
int foot, inches;
public:
Distance()
{
foot=1;
inches=2;

}

Distance(float m)
{
foot=m*3.28;
inches=foot%12;


}
 operator float();

void getdist()
{
cout<<"Enter Distance in foot : ";
cin>>foot;
cout<<"Enter Distance in inches : ";
cin>>inches;
}

void display()
{
cout<<"Distance is :\n";
cout<<foot<<" feet"<<inches<<"inches";

}
};

 Distance :: operator float ()
{
float m;

m=(foot/3.28)+(inches/39.37);
return m;

}




int main()
{
Distance D;
float m;
cout<<"\nEnter the distance in meters : ";
cin>>m;
D=m;
D.display();
cout<<"\n------conversion succesful------\n";
cout<<"\nEnter the distance in feet and inches :";
D.getdist();
m=D;

cout<<"Displaying distance in metres ";
cout<<"\n"<<m<<" Meters";

cout<<"\n------conversion succesful------\n";



return 0;
}
