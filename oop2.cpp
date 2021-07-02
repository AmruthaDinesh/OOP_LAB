#include<iostream>
using namespace std;
class Bank_Account
{
char name[15];
long int acc_number,no;
char acc_type[10];
float bal_amt,amt;

public:
void assign();

void depo();
void withdraw();
void display()
{
cout<<"\nDisplaying Data\nName of the depositor:"<<name<<"\nBalance:"<<bal_amt;
}

};

void Bank_Account::assign()
{
cout<<"Enter the \n1.name of depositor ";
cin>>name;
cout<<"\n 2.account number";
cin>>acc_number;
cout<<"\n 3.Account type";
cin>>acc_type;
cout<<"\n 4.Balance amount ";
cin>>bal_amt;

}

void Bank_Account::depo()
{
cout<<"Enter the account number to which you want to deposit money";
cin>>no;
if(no==acc_number)
{
cout<<"\nAccount number valid";
cout<<"\nEnter the amount you want to deposit";
cin>>amt;
bal_amt=bal_amt+amt;
}
else
{
cout<<"Account number does not exist";
exit(1);
}
cout<<"Depositing amount = "<<amt<<" is successfully completed";
}

void Bank_Account::withdraw()
{
cout<<"\nEnter the account number to withdraw from: ";
cin>>no;
if(no==acc_number)
  {
   cout<<"\nEnter the amount to be withdrawn";
   cin>>amt;
    if(amt<=bal_amt)
     {
      cout<<"Amount withdrawn";
      bal_amt=bal_amt-amt;
     }
    else
   {
   cout<<"\nYou dont have enough balance to withdraw";
   exit(1);
   }
  }
  else
  {
  cout<<"Account number does not exist!";
  }
}
int main()
{
int i;
char ch;
Bank_Account obj;
do{
cout<<"\nPRESS\n \n1..To create new account\n2..To deposit to current account\n3..To withdraw from current account\n4..To Display name and Balance amount\n5..exit\n";
cin>>i;
switch(i)
{
case 1:
obj.assign();
break;
case 2:
obj.depo();
break;
case 3:
obj.withdraw();
break;
case 4:
obj.display();
break;
case 5:
exit(0);
default:cout<<"\nInvalid Choice ";
}
cout<<"\n\nDo you want to continue (Y/N)";
cin>>ch;
}while((ch=='Y')||(ch=='y'));
return 0;
}

