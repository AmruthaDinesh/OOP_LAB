#include<iostream>
using namespace std;
class Number_array
{
int size;
int ar[20];

public:
Number_array(int s)
{
size=s;
for(int i=0;i<s;i++)
{
ar[i]=1;
}
}

friend Number_array operator-(Number_array &N)
{
for(int i=0;i<N.size;i++)
{
N.ar[i]=-N.ar[i];

}
return N;

}

void display()
{
for(int i=0;i<size;i++)
{
cout<<"  "<<ar[i];
}
}

};

int main()
{
int s;
cout<<"\nEnter the size of array :";
cin>>s;

Number_array No(s);
Number_array New(s);
New = -No;
No.display();
cout<<"\n New display";
New.display();
return 0;
}
