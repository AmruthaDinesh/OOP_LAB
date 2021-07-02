/*

Reg no :20219017
Name: Amrutha Dinesh


*/
#include<iostream>
using namespace std;
class student
{
int No;
char Name[30];
float mark1,mark2,mark3;

public:
virtual void sort(int n)=0;

void get_student()
{
cout<<"\nEnter the Student details: \nStudent Number : ";
cin>>No;
cout<<"\nStudent Name : ";
cin>>Name;
cout<<"\nStudent mark1 : ";
cin>>mark1;
cout<<"\nStudent mark2 : ";
cin>>mark2;
cout<<"\nStudent mark3 : ";
cin>>mark3;


}

float m1()
{

return mark1 ;
}

float m2()
{

return mark2 ;
}

float m3()
{

return mark3 ;
}

void show_student()
{
cout<<"\nDisplaying Student Details : \nStudent No :"<<No<<"\nStudent Name : "<<Name<<"\nStudent Mark 1 :"<<mark1<<"\nStudent Mark 2 :"<<mark2<<"\nStudent Mark 3 :"<<mark3;
}

};

class UG : public student   /* UG students class */
{

public:
float Total;

int Rank ;
void sort(int n);

void get_UG()
{
cout<<"\nEnter details of UG student :";
get_student();
}

void show_UG()
{
cout<<"\nDisplaying Details of UG student :";
show_student();
cout<<"\n Total :"<<Total;
cout<<"\nRank = "<<Rank;
}

float total()
{
float T;
T= m1()+m2()+m3();
Total=T;
return T;

}


};

class PG : public student  /*  PG students class */
{

float UG_CGPA;
int certification;

float Total;

public:
int Rank;

void get_PG()
{
cout<<"\nEnter details of PG student :";
get_student();
cout<<"\nEnter UG CGPA : ";
cin>>UG_CGPA;
cout<<"\nDo you have certification : (if yes - 1 / if no-0) ";
cin>>certification;

}

void show_PG()
{
cout<<"\nDisplaying Details of PG student :";
show_student();
cout<<"\n UG CGPA ="<<UG_CGPA;
cout<<"\n Certification ="<<certification;
cout<<"\nRank = "<<Rank;
}
void sort(int n);



/*To perform function overloading of total according to certification */

void finding_tot()
{
float M1,M2,M3;
if(certification==1)
{
M1=m1();
M2=m2();
M3=m3();
total(M1,M2,M3,10);
}
else
{
total(M1,M2,M3);
}


}


float total(float m1,float m2,float m3,float extra)/* overloaded function total*/
{
float T;
T=m1+m2+m3+extra;
Total=T;
return T;
}

float total(float m1,float m2,float m3)/* overloaded function total */
{
float T;
T= m1+m2+m3;
Total=T;
return T;

}




};

void PG ::sort(int n)
{


   for (int i = 0; i < (n - 1); ++i)
              {
                for (int j = 0; j < (n - i - 1); ++j)
                {
                    if (this[j].Total > this[j + 1].Total)
                    {
                        PG temp = this[j];
                        this[j] = this[j + 1];
                        this[j+ 1] = temp;
                    }
                  
                }
            }
       

}

void UG ::sort(int n)
{


   for (int i = 0; i < (n - 1); ++i)
              {
                for (int j = 0; j < (n - i - 1); ++j)
                {
                    if (this[j].Total > this[j + 1].Total)
                    {
                        UG temp = this[j];
                        this[j] = this[j + 1];
                        this[j+ 1] = temp;
                    }
                  
                }
            }
       

}







int main()
{
int n1,n2;
student *S;
cout<<"\nEnter the number of UG students :";
cin>>n1;
cout<<"\nEnter the number of PG students :";
cin>>n2;

UG Btech[n1];
PG Mtech[n2];

for(int i=0;i<n1;i++)
{
cout<<"\nEnter details of UG student "<<i+1<<" : ";  /*U G student details entering and displaying */
Btech[i].get_UG();

}
for(int i=0;i<n1;i++)
{
Btech[i].total();
}

/* finding rank of UG students */
S=Btech;
S->sort(n1);
/*assign rank*/
for(int i=0;i<n1;i++)
{
Btech[i].Rank=i+1;
}


for(int i=0;i<n1;i++)
{
cout<<"\nDisplaying details of UG student "<<i+1<<" : ";
Btech[i].show_UG();


}





for(int i=0;i<n2;i++)

{
cout<<"\nEnter details of PG student "<<i+1<<" : ";
Mtech[i].get_PG();
Mtech[i].finding_tot();
}

for(int i=0;i<n2;i++)
{
Mtech[i].finding_tot();
}

/* finding rank of UG students */
S=Mtech;
S->sort(n2);
/*assign rank*/
for(int i=0;i<n1;i++)
{
Mtech[i].Rank=i+1;
}


for(int i=0;i<n2;i++)

{
cout<<"\nDisplaying details of PG student "<<i+1<<" : ";
Mtech[i].show_PG();
}


return 0;
}
