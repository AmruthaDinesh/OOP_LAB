/*6. Employee class contain details like name,emp no,pay rate, constructor function and a
pay() function. Manager class inherits from employee and has the option of drawing pay
on hourly basis or salary basis and has an additional data issalaried(bool). Class
Supervisor is derived from employee and has an additional field department and is
always salaried. Base and both derived classes should contain pay() function with same
name.*/

#include<iostream>
#include<string.h>
using namespace std;

class Employee
{
protected:
char name[20];
int emp_no;
float pay_rate;
 
 public:
 Employee()
 {
 strcpy(name,"unknown");
 emp_no=1100;
 pay_rate=50;
 
 }
 
 virtual  float pay()
 {
 
 return 0;
 
 }

void getEmp()
{
cout<<"\nEnter the Employee Name :";
cin>>name;
cout<<"\nEnter the Employee Number :";
cin>>emp_no;
cout<<"\nEnter the Em ployee pay rate per hour :";
cin>>pay_rate;

}

void disEmp()
{
cout<<"\nDisplaying the Employee name"<<name<<"\nDisplaying the Employee number "<<emp_no<<"\nEmployee rate per hour : "<<pay_rate;
} 

};

class Manager : public Employee
{
int  tf;
float amt,h;
public:
bool issalaried()
{
cout<<"\nIs the Manager salaried :(1=yes//0=no)";
cin>>tf;
if(tf==1)
return 1;
else
return 0;
}
float pay()
{
if (issalaried()==1)
{
amt=pay_rate*30*8;
}
else
{
cout<<"Enter the hours worked;";
cin>>h;
amt=pay_rate*h;

}

return amt;
}
void disMan()
{
cout<<"\nDisplaying the Manager pay per month : "<<amt;


}

};


class  Supervisor : public Employee
{
char dept[15];
float amt;
public:
Supervisor()
{
strcpy(dept,"unknown");

}
float pay()
{
amt=pay_rate*30*8;
return amt;

}
void getSup();
void disSup();



};

void Supervisor ::getSup()
{

cout<<"\nEnter the department of the Supervisor :";
cin>>dept;

}

void Supervisor ::disSup()
{
cout<<"\nDisplaying Supervisor Department : "<<dept;
cout<<"\nDisplaying the salary :"<<amt;

}


int main()
{

 Manager  M; 
  Supervisor S;


cout<<"\nEnter the detauils of the manager :";
M.getEmp();
M.disEmp();

M.pay();
M.disMan();

cout<<"\nEnter the details of the Supervisor : ";
S.getEmp();
S.disEmp();

S.getSup();

S.pay();


S.disSup();


return 0;
}


