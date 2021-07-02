
#include<iostream>
using namespace std;

class counter
  {
    private : int count;
    public: counter() 
    {
    count=0;
    }
        int getcount()
          {  return count;  }
      /*  void operator++()//This is for prefix notation ++C
          {  
           count++;
          }
          */
          
          /*operator function can also be defined as*/
          
   counter operator ++()//this helps us to specify C4=++C5
  {  counter temp;
      ++count;
      temp.count=count;
      return temp;
  }

/*For post fix increment */

counter operator ++(int)//for post increment c++
{
counter temp;
count++;
temp.count=count;
return temp;

}
  };

int main()
  { counter C1,C2,C3;
     cout<<"C1="<<C1.getcount();
     cout<<"C2="<<C2.getcount();
     cout<<"C3="<<C3.getcount();
     C1++;
     ++C1;
     C2++;
     ++C2;
     C3=++C2;
     cout<<"C1="<<C1.getcount();
     cout<<"C2="<<C2.getcount();
     cout<<"C3="<<C3.getcount();
  }

