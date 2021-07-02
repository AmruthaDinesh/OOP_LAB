#include<iostream>
using namespace std;
class circle ;

class rectangle
{
int l,b;
int area;
public:

void get_lb()
{
int p;
int q;
cout<<"\nEnter the sides of the rectangle :";
cin>>p>>q;
l=p;
b=q;
area=l*b;

}


friend float space_area(rectangle R ,circle C) ;
};

class circle
{
int r;
float area;
public:
void get_r()
{
cout<<"\nEnter the radiues of circle ";
cin>>r;
area=3.14*r*r;


}

friend float space_area(rectangle R ,circle C) ;

};

float space_area(rectangle R, circle C)

{
float area_of_space;
area_of_space= R.area-C.area;
return area_of_space;
}


int main()
{
rectangle R;
circle C;
R.get_lb();
C.get_r();

cout<<"\nArea of space = "<<space_area(R,C);


return 0;
}
