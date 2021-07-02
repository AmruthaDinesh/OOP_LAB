#include<iostream>
using namespace std;
class Volume
{
float volume;

public:
Volume()
{
volume =0;

}

float find_volume(float r)
{
volume=(4/3)*3.14*r*r*r;
return volume;

}

float find_volume(float r,float h)
{
volume=(4/3)*3.14*r*r*h;
return volume;
}

float find_volume(float l,float b,float h)
{
volume=l*b*h;
return volume;

}

};

int main()
{
Volume V;
int choice, ch;
float l,b,h,r;

do
{
cout<<"\nPress * to find volume of :\n1----cuboid\n2----spehere\n3----cylinder";
cin>>choice;
switch(choice)
{
case 1:

cout<<"\n Enter length of cuboid :";
cin>>l;

cout<<"\n Enter breadth of cuboid :";
cin>>b;

cout<<"\n Enter height of cuboid :";
cin>>h;

cout<<"\nVolume of the cuboid = "<<V.find_volume(l,b,h);
break;


case 2:
cout<<"\n Enter radius of sphere :";
cin>>r;
cout<<"\nVolume of the sphere = "<<V.find_volume(r);
break;

case 3:
cout<<"\n Enter radius of cylinder :";
cin>>r;
cout<<"\n Enter height of cylinder :";
cin>>h;

cout<<"\nVolume of the cylinder= "<<V.find_volume(r,h);
break;

default:cout<<"\nInvalid Choice";


}
cout<<"\n\nPress 1 to continue :";
cin>>ch;


}while(ch==1);



return 0;
}
