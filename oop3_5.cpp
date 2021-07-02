/*Polar coordinates are represented in angle and radius format while rectangular
coordinates represented as (x,y). Define classes for both types and include member
functions to convert from polar to rectangular coordinates.(conversion from class to class.)*/

//Amrutha Dinesh 
//Roll no:17

#include<iostream>
#include<math.h>
using namespace std;
class Rectangular;
class Polar
{


public:
int angle;
int radius;
Polar()
{
angle =60;
radius=10;

}
void getpolar()
{
cout<<"\nEnter the polar coordinates:";
cout<<"\nAngle : ";
cin>>angle;
cout<<"\nRadius :";
cin>>radius;

}

int geta()
{
return angle;

}

int getr()
{
return radius;
}
void display()
{
cout<<"Displaying Polar coordinates: ";
cout<<"\nAngle : "<<angle;
cout<<"\nRadius : "<<radius;

}
operator Rectangular();



};





class Rectangular
{


public:
int x,y;
Rectangular()
{
x=1;
y=1;

}

int getx()
{
return x;

}
int gety()
{
return y;
}
void getrectangular()
{
cout<<"\nEnter the rectangular coordinates : ";
cout<<"\nx = ";
cin>>x;
cout<<"\ny = ";
cin>>y;

}

void displayrect()
{
cout<<"\nDisplaying the rectangular coordinates :";
cout<<"\nx = "<<x;
cout<<"\ny = "<<y;
}

operator Polar()
{
Polar P;
float k;
k=((x*x)+(y*y));

P.radius=(sqrt(k));
P.angle=((atan2(y,x)*180)/3.14);

return P;
}

};

Polar ::operator Rectangular()
{

Rectangular *R;
R->x=radius*(cos(angle*M_PI/180));
R->y=radius*(sin(angle*M_PI/180));
return *R;

}


int main()
{
char ch;
Rectangular Ro,Rp;
Polar Po,Pp;


int i;
do
{
cout<<"\n-----------------------------Press --------------------------------\n";
cout<<"\n1-----------------------------------To change rectangular to polar\n";
cout<<"\n2----------------------------------To change polar to rectangular\n";

cin>>i;


switch(i)
{
case 1: 
  cout<<"\nEnter the Rectangular coordinates which need to be converted :";
  Ro.getrectangular();
  Po=Ro;
  cout<<"\nDisplaying the Polar coordinates : \n";
  Po.display();
  
  
  
 break;
 case 2:
   cout<<"\nEnter the Polar coordinates which need to be converted :";
  Pp.getpolar();
  Rp=Pp;
  cout<<"\nDisplaying the Rectangular  coordinates : \n";
  Rp.displayrect();
 
 break;
 
 default:
 cout<<"\nInvalid Choice !";
 
}
cout<<"\nDo you want to continue : (y/n)";
cin>>ch;


}while(ch=='Y'||ch=='y');



return 0;

}

