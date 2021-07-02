#include<iostream>
#include<math.h>
using namespace std;
class triangle
{
int x1,x2,x3,y1,y2,y3,z1,z2,z3;

public:
inline int dist();
int val();
void getval();
void show()
{
int d1,d2,d3;
cout<<"\n_____Displaying the triangle points_____\n";
cout<<"("<<x1<<","<<y1<<","<<z1<<")";
cout<<"\n("<<x2<<","<<y2<<","<<z2<<")";
cout<<"\n("<<x3<<","<<y3<<","<<z3<<")";
d1=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1)+(z2-z1)*(z2-z1));
d2=sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3)+(z2-z3)*(z2-z3));
d3=sqrt((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1)+(z3-z1)*(z3-z1));
cout<<"\n_____Displaying the  triangle sides_____\n";
cout<<"\nd1="<<d1<<"\n"<<"d2="<<d2<<"\n"<<"d3="<<d3;
}

};
inline int triangle::dist()
{
int d1,d2,d3;
d1=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1)+(z2-z1)*(z2-z1));
d2=sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3)+(z2-z3)*(z2-z3));
d3=sqrt((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1)+(z3-z1)*(z3-z1));
if(d1<d2)

{
if(d1<d3)
  {
  return d1;
  }
  else
  {
  return d3;
  }
}
else
{
if(d2<d3)
  {
  return d2;
  }
  else
  {
   return d3;
   }
}



}

int triangle::val()
{
float ar;
ar=(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2))/2;
if(ar==0)
{
return 0;
}
else
{
return 1;
}
}

void triangle::getval()
{
cout<<"\nEnter the coordinates of first point : \n"<<"x1 = ";
cin>>x1;
cout<<"\ny1 = ";
cin>>y1;
cout<<"\nz1 = ";
cin>>z1;
cout<<"\nEnter the coordinates of second point : \n"<<"x2 = ";
cin>>x2;
cout<<"\ny2 = ";
cin>>y2;
cout<<"\nz2 = ";
cin>>z2;
cout<<"\nEnter the coordinates of third point : \n"<<"x3 = ";
cin>>x3;
cout<<"\ny3 = ";
cin>>y3;
cout<<"\nz3 = ";
cin>>z3;
}


int main()
{
triangle T;
T.getval();
if(T.val()==1)
  {
  cout<<"\nTriangle valid";
  cout<<"\nShortest distance between sides is : "<<T.dist();
  T.show();
    }
else
{
cout<<"\n_____these sides do not make a triangle____\n";
}
return 0;
}
