#include<iostream>
#include<math.h>
using namespace std;

class Shape
{

public:

virtual float area()=0;
virtual float perimeter()=0;


};

class  triangle : public Shape

{
float S1,S2,S3;
public:
 void input()
 {
  cout<<"\nEnter the Triangle sides :";
  cin>>S1>>S2>>S3;
 }
 
 float area()
 {
 float S;
 float ar;
 S=(S1+S2+S3)/2;
 ar=sqrt(S*(S-S1)*(S-S2)*(S-S3));
 return ar;
 }

float perimeter()
{
float P;
P=S1+S2+S3;
return P;
}

void output()
 {
 cout<<"\nTriangle sides : ";
 cout<<S1<<" "<<S2<<" "<<S3; 
 }

 int val()
 {
 if(((S1+S2)>S3)&&((S1+S3)>S2)&&((S2+S3)>S1))
 return 1;
 else 
 return 0;
 
 }
};

class rectangle: public Shape

{
float a,b;
public:
 void input()
 {
 cout<<"\nEnter the values of Rectangle sides a and b : ";
 cin>>a>>b;
 }
 void output()
 {
 cout<<"\nRectangle sides : \n";
 cout<<a<<"  "<<b;
 
 }
 int val()
 {
 if((a>0)&&(b>0))
 return 1;
 else
 return 0;
 }
 float area()
 {
 return (a*b);
 }

float perimeter()
{
return (2*(a+b));
}
};

class circle : public Shape
{
float radius;
public:
   void input()
        {
            cout << "\nEnter the raduis of Circle : ";
            cin >> radius;
        }
   
   int val()
        
        {
            if (radius <= 0)
                return 0;
            else
            return 1;
        }
         
float area()
{
float ar;
ar=3.14*radius*radius;
return ar;

}


float perimeter()
{
float P;
P=2*3.14*radius;
return P;

}
};



class square : public Shape
{
float side;
public:
   void input()
        {
            cout << "\nEnter the side of the Square : ";
            cin >> side;
        }
   
   int val()
        
        {
            if (side <= 0)
                return 0;
            else
            return 1;
        }
         
float area()
{
return (side*side);
}


float perimeter()
{

return (4*side);

}
};

int main()
{
Shape *ptr;
triangle T;
square S;
rectangle R;
circle C;
int ch;
char g;
do 
{
cout<<"\n----------------PRESS-----------------\n";
cout<<"1------------Triangle------------------\n";
cout<<"2-------------Circle-------------------\n";
cout<<"3-------------Square-------------------\n";
cout<<"4------------Rectangle-----------------\n";
cout<<"0--------------Exit--------------------\n";


cout<<"\nEnter your choice :";
cin>>ch;

switch (ch)
{
case 1:
    ptr=&T;
    T.input();
    if(T.val()==1)
    {
    cout<<"The area of Triangle with given sides : "<<ptr->area();
    cout<<"\nThe perimeter of Triangle with given sides : "<<ptr->perimeter();
    }
    else
    cout<<"\nInvalid Triangle sides ";
     break; 
 
case 2:
    ptr=&C;
   C.input();
      if(C.val()==1)
    {
    cout<<"The area of Circle with given radius  : "<<ptr->area();
    cout<<"\nThe perimeter of Circle with given radius : "<<ptr->perimeter();
    }
    else
    cout<<"\nInvalid Radius ";
     break; 
 
case 3:
    ptr=&S;
   S.input();
   if(S.val()==1)
    {
    cout<<"The area of Square with given side : "<<ptr->area();
    cout<<"\nThe perimeter of Square with given side : "<<ptr->perimeter();
    }
    else
    cout<<"\nInvalid side ";
     break; 
case 4:
   ptr=&R;
   R.input();
   if(R.val()==1)
    {
    cout<<"The area of Rectangle with given sides : "<<ptr->area();
    cout<<"\nThe perimeter of Rectangle with given sides : "<<ptr->perimeter();
    }
   else
    {cout<<"\nInvalid Rectangle sides ";}
    break;
 case 0:
   exit(1);  
   break; 
       
default: cout<<"\nInvalid choice !\n PLEASE ENTER A VALID CHOICE\n";
}
cout<<"\nDo you want to continue (Y/N) ? \nEnter your choice : ";
cin>>g;
}while(g=='Y'||g=='y');

return 0;
}


