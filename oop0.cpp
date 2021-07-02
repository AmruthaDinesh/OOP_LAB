#include<iostream>
using namespace std;
struct pho
{
int code,exchange;
long int numb;

};
void initialize(struct S);
int main()
{
   pho S1, S2;
S1={212,789,8900};
cout<<"Enter the code: ";
cin>>S2.code;
cout<<"\nEnter the exchange : ";
cin>>S2.exchange;
cout<<"\nEnter the number: ";
cin>>S2.numb;
cout<<"\nMy number:"<<"("<<S1.code<<")"<<S1.exchange<<"-"<<S1.numb;
cout<<"\nYour  number:"<<"("<<S2.code<<")"<<S2.exchange<<"-"<<S2.numb;


   return 0;

}
