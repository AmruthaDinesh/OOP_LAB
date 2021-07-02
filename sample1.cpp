#include<iostream>
using namespace std;

class calculate
{
 
 private:
  int a,b;
  
  public:
  calculate()
  {
  int a=0;
  int b=0;
  
  
  }

void read()
{
cout<<"/nEnter 2 numbers";
cin>>a>>b;

}  

void display()
{
cout<<"Numbers are : "<<a <<" and "<<b;
 
}

int add()
{
int c=a+b;
return c;


}  

int substract()
{

int c= a-b;
return c;

}

int multiply()
{

int c=a*b;
return c;

}

int divide()

  {
  
  int c=a/b;
  return c;
  
  }
  


};



int main()

{
int ch;

calculate c;
int v;
do
{

cout<<"Press 1--to read values/n/n2--to display values/n3--to add values/n4--to substract values/n5--to multiplay /n6to divide";
cin>>v;

switch(v)
{

case 1:
c.read();
break;

case 2:
c.display();
break;

case 3:
cout<<c.add();
break;

case 4:
cout<<c.substract();
break;

case 5:
cout<<c.multiply();
break;

case 6:
cout<<c.divide();
break;

default:
cout<<"\nInvalid choice ";



}

cout<<"Press 1 if you want to continue :";
cin>>ch;
}while(ch==1);
return 0;

}
