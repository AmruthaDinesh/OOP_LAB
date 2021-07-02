#include<iostream>
using namespace std;

int main()
{
int a,b,choice,ch;

void swap_by_value(int a ,int b);
void swap_by_ref(int& a,int& b);
void swap_by_address(int* a,int *b);

do
{
cout<<"\nPress 1--to swap by value \n2---to swap by reference\n3--to swap by addresss";

cin>>choice;
switch(choice)
{
case 1:
cout<<"\nEnter values of a and b ";
cin>>a>>b;
cout<<"\nDisplaying values before calling swap function : "<<a<<" and "<<b;
swap_by_value(a,b);
cout<<"\nDisplaying values after calling swap function : "<<a<<" and "<<b;
break;

case 2:
cout<<"\nEnter values of a and b ";
cin>>a>>b;
cout<<"\nDisplaying values before calling swap by ref function : "<<a<<" and "<<b;
swap_by_ref(a,b);
cout<<"\nDisplaying values after calling swap by ref function : "<<a<<" and "<<b;
break;
case 3:
cout<<"\nEnter values of a and b ";
cin>>a>>b;
cout<<"\nDisplaying values before calling swap by address function : "<<a<<" and "<<b;
swap_by_address(&a,&b);
cout<<"\nDisplaying values after calling swap by address function : "<<a<<" and "<<b;

break;
default: cout<<"\nInvalid Choice , try again";


}
cout<<"\nPress 1 if you want to continue :";
cin>>ch;
}while(ch==1);


return 0;
}

void swap_by_value(int a,int b)
{
int temp;
temp=a;
a=b;
b=temp;

}

void swap_by_ref(int& a,int& b)
{
int temp;
temp=a;
a=b;
b=temp;

}

void swap_by_address(int* a,int* b)
{
int temp=*a;
*a=*b;
*b=temp;
}


