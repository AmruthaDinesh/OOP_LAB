/*Write a C++ program to create a class STUDENT with age name and register number. Using Inheritance, derive two classes MTech-stud and BTech-stud.List both the category of students in the increasing order of marks( for BTech-stud) and gpa( for MTech-stud). In case of tie, display whichever name comes first. Make sort() function as a virtual function.*/

#include<iostream>
#include<string>
using namespace std;


class STUDENT
{
protected:

int age;
string name;
int reg_no;

public:
STUDENT()
{
age=50;
name.assign("unknown");
reg_no=10000;

}

void getStudnt();
void dispStudnt();
virtual void sort(int n)=0;




};
 
 void STUDENT ::getStudnt()
 {
 cout<<"\nEnter the student name : ";
 cin>>name;
  cout<<"\nEnter the student age : ";
 cin>>age;
  cout<<"\nEnter the student register no : ";
 cin>>reg_no;
 }
 void STUDENT ::dispStudnt()
 {
 cout<<"\nDisplaying the student name : "<<name<<"\tStudent age : "<<age<<"\tStudent Register number : "<<reg_no<<" ";

 }
 
class BTech_stud:public STUDENT
{
int marks;
public:
BTech_stud()
{
marks=0;
}

void getB()
{
cout<<"\nEnter marks : ";
cin>>marks;
}

void dispB()
{
cout<<"\tMarks = "<<marks;

}

 void sort(int n)
        {
            for (int i = 0; i < n - 1; ++i)
            {
                for (int j = 0; j < n - i - 1; ++j)
                {
                    if (this[j].marks > this[j + 1].marks)
                    {
                        BTech_stud temp = this[j];
                        this[j] = this[j + 1];
                        this[j+ 1] = temp;
                    }
                    else if (this[j].marks == this[j + 1].marks)
                    {
                        if ((this[j].name).compare(this[j + 1].name) >0)
                        {
                            BTech_stud temp = this[j];
                            this[j] = this[j+ 1];
                            this[j+ 1] = temp;
                        }
                    }
                }
            }
        }


}; 


class MTech_stud:public STUDENT
{
int gpa;
public:
 MTech_stud()
 {
 gpa=5;
 }
 
 void getM()
{
cout<<"\nEnter gpa : ";
cin>>gpa;
}

void dispM()
{
cout<<"\tgpa = "<<gpa;

}


 void sort(int n)
        {
            for (int i = 0; i < (n - 1); ++i)
            {
                for (int j = 0; j < (n - i - 1); ++j)
                {
                    if (this[j].gpa > this[j + 1].gpa)
                    {
                        MTech_stud temp = this[j];
                        this[j] = this[j + 1];
                        this[j+ 1] = temp;
                    }
                   else  if (this[j].gpa == this[j + 1].gpa)
                    {
                         if ((this[j].name).compare(this[j+ 1].name) >0)
                        {
                            MTech_stud temp = this[j];
                            this[j] = this[j+ 1];
                            this[j+ 1] = temp;
                        }
                    }
                }
            }
        }


}; 


int main()
{
 STUDENT *S;
int Bn,Mn;
cout<<"\nEnter the number of B-Tech Students";
cin>>Bn;

BTech_stud CUSAT[Bn];


for(int i=0;i<Bn;i++)
{
cout<<"\nEnter details of B-Tech student "<<i<<" : \n";
CUSAT[i].getStudnt();
CUSAT[i].getB();


}


cout<<"\nArranging students according to marks : ";
S=CUSAT;
S->sort(Bn);

cout<<"\nDisplaying BTech students details : ";
for(int i=0;i<Bn;i++)
{
CUSAT[i].dispStudnt();
CUSAT[i]. dispB();

}
//for MTech students
cout<<"\nEnter the number of M-Tech Students";
cin>>Mn;

MTech_stud CUCEK[Mn];

for(int i=0;i<Mn;i++)
{
cout<<"\nEnter details of M-Tech student "<<i<<" : \n";
CUCEK[i].getStudnt();
CUCEK[i].getM();
}


cout<<"\nArranging students according to GPA : ";
S=CUCEK;
S->sort(Mn);

cout<<"\nDisplaying  MTech student details : ";
for(int i=0;i<Mn;i++)
{
CUCEK[i].dispStudnt();
CUCEK[i]. dispM();

}

return 0;
}
