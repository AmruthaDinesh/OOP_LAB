#include<iostream>
using namespace std;
double power(double n,int p);
double power(int n, int p);
double power(char n, int p);
double power(float n, int p);
double power(long n, int p);

 double power(double n,int p)
 {
 return double(n*p);
  }
double power(int n, double p)
{
return double(n*p);
}

double power(int n, int p)
{
return double(n*p);
}

double power(char n, int p)
{
return double(int(n)*p);
}



double power(float n, int p)
{
return double(n*p);
}
double power(long n, int p)
{
return double(n*p);
}


int main()
{
cout<<"calling double power(double ,int) "<<power(2.004,9)<<"\n";
cout<<"calling double power(int,int) "<<power(2,9)<<"\n";
cout<<"calling  power(float,int) "<<power(9.008f,9)<<"\n";
cout<<"calling power(char,int) "<<power('2',9);
cout<<"calling  power(long ,int) "<<power(2L,9)<<"\n";


return 0;
}
