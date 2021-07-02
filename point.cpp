#include<iostream>
#include<math.h>
using namespace std;
class point
{

int x,y;
public:
void get_point()
{
cout<<"\nEnter x-coordinate :";
cin>>x;
cout<<"\nEnter y-coordinate :";
cin>>y;

}

void display_point()
{
cout<<"\nx = "<<x<<" and "<<"y = "<<y;

}

int get_x()
{

return x;
}

int get_y()
{

return y;
}

};

class Line
{
point start;
point end;

public:
void get_start()
{
start.get_point();
}

void get_end()
{
end.get_point();
}

int get_length()
{
int l=sqrt(((start.get_x()-end.get_x())*(start.get_x()-end.get_x()))+((start.get_y()-end.get_y())*(start.get_y()-end.get_y())));
return l;

}
};

int main()
{
Line AB;
AB.get_start();
AB.get_end();
cout<<"Length of the line is : "<<AB.get_length();


return 0;
}
