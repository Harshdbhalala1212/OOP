#include<iostream.h>
#include<conio.h>
class A
{
 public:
	  void set()
	  {
	    cout<<"set function of A class"<<endl;
	  }
};
class B:public A
{
  public:
	  void set()
	  {
	    cout<<"set function of B class"<<endl;
	  }
};

void main()
{
  clrscr();
  B b;
  b.set();
  getch();
}