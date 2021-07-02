/*Program -3 
  Lab cycle -3
  By Amrutha Dinesh*/
  
  
   /*Write a program using operator overloading to overload Stream operators (<< and >>) to read and display the objects of complex class.*/
   
  #include<iostream>
  using namespace std;
  class complex
  {
  int a,b;
  public:
  complex()
  {
  a=1;
  b=1;
   }
   
   friend istream & operator >>(istream &pin ,complex &c);
   friend ostream & operator <<(ostream &dout ,complex &c);
    
  };
  
  istream & operator >>(istream &pin ,complex &c)     //function body of operator function >>
  {
  cout<<"Enter values of a and b : ";
  pin>>c.a>>c.b;
  return pin;
  }
  
  
  ostream & operator <<(ostream &dout,complex &c)     //function body of operator function <<
  {  
  dout<<"("<<c.a<<"+ i"<<c.b<<")";
  return dout;
  }
  
  int main()
  {
  complex C1,C2,C3;
  cin>>C3;//invoking the operator function >>
  cout<<"Displaying c3 which is overloaded : ";
  cout<<C3<<"\n";//invokes the operator function <<
  cin>>C2;
  cout<<"Displaying c2: ";
  cout<<C2<<"\n";
  cout<<"Displaying c1 : ";
  cout<<C1<<"\n";
  return 0;
  }
