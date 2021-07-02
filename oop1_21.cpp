#include<iostream>
using namespace std;
class number
{
int ar[5];

public:
number()
{
int i;
for(i=0;i<5;i++)
 {
 ar[i]=i+1;
 } 
}
void getdata(int size);

number(number &i)
{
int o;
for(o=0;o<5;o++)
{
ar[o]=i.ar[o];
}
}

void modify(int size,int k);
void display(int size);
static int avg(int *ptr,int size);
void arrange(int size);
int* addr()
{
return (&ar[0]);
}
};



int number::avg(int *ptr,int size)
{
int a=0,i;
for(i=0;i<size;i++)
{
a=a+*(ptr+i);
}
return (a/size);
}
void number::getdata(int size)
{
int i;
cout<<"\nEnter the values of array\n";
for(i=0;i<size;i++)
{
cout<<"\nEnter the value at position "<<i+1<<"\n";
cin>>ar[i];
}

}


void number::modify(int size,int k)
{
int i;
for(i=0;i<size;i++)
{
ar[i]=ar[i]*k;
}
}

void number::display(int size)
{
int i;
for(i=0;i<size;i++)
 {
 cout<<"\n"<<ar[i];
 }
}


void number::arrange(int size)
{
int i,j;
int tmp;
 for(i=0;i<size;i++)
 {
 for(j=0;j<size-i-1;j++)
  {
    if(ar[j]>ar[j+1])
     {
  tmp=ar[j];
  ar[j]=ar[j+1];
  ar[j+1]=tmp;
     }
  }

 }
}
int main()
{
int n;
int k;
number obj1;
cout<<"\nEnter the size : ";
cin>>n;
obj1.getdata(n);
cout<<"Average = "<<number::avg(obj1.addr(),n)<<"\n";
number obj2(obj1);
cout<<"\nDisplaying the values before modification: \n";
obj1.display(n);
cout<<"\nEnter the multipier value : ";
cin>>k;
cout<<"\nModifying data: \n";
obj2.modify(n,k);
cout<<"\nDisplaying data after modification:\n";
obj2.display(n);
cout<<"\nFinding average again through the first object : "<<number::avg(obj1.addr(),n)<<"\n";
cout<<"\nFinding average  through the second  object : "<<number::avg(obj2.addr(),n)<<"\n";
number obj3(obj1);
obj3.arrange(n);
cout<<"\nDisplaying object 3 after sorting : ";
obj3.display(n);
cout<<"\nThank you\n";
return 0;

}
