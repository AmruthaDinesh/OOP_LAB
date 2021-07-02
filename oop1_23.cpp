#include<iostream>
using namespace std;
class numbers
{
public:
int a,b;

void getvalue()
{
cout<<"\nEnter the two values : \n a = ";
cin>>a;
cout<<"\nb = ";
cin>>b;
}
void swap_by_value(numbers A);
void swap_by_ref(numbers& A);
void swap_by_address( numbers* A);
void display()
{
cout<<"\nDisplaying the values of a and b : \n"<<" a = "<<a<<"\t"<<" b = "<<b;
}
};
void numbers::swap_by_value(numbers A)
{
cout<<"\n\nSwapping by value: \n";
int t;
t=A.a;
A.a=A.b;
A.b=t;
}

void numbers::swap_by_ref(numbers& A)
{
int t;
cout<<"\n\nSwapping by reference : \n";
t=A.a;
A.a=A.b;
A.b=t;
}

void numbers::swap_by_address(numbers* A)
{
int t;
cout<<"\n\nSwapping by address : \n";
t=A->a;
A->a=A->b;
A->b=t;
}

int main()
{
numbers N,N1;
int O;
char ch;

N1.getvalue();
do{
cout<<"\n-----------------Press----------------------\n";
cout<<"\n1.......To swap by value"<<"\n2......To swap by reference\n3......To swap by address";
cin>>O;

switch(O)
{
case 1:
cout<<"\nValues before calling the function: "<<"a ="<<N1.a<<"\nb = "<<N1.b;
N.swap_by_value(N1);

N1.display();
break;
case 2:
cout<<"\nValues before calling the function: "<<"a ="<<N1.a<<"\nb = "<<N1.b;
N.swap_by_ref(N1);

N1.display();
break;
case 3:
cout<<"\nValues before calling the function: "<<"a ="<<N1.a<<"\nb = "<<N1.b;
N.swap_by_address(&N1);

N1.display();
break;
default:cout<<"\n###--INVALID CHOICE--###";
}
cout<<"\nDo you want to continue ? (Y/N) ";
cin>>ch;
}while(ch=='Y'||ch=='y');
cout<<"\n------------------Thank you--------------------\n";
return 0;
}
