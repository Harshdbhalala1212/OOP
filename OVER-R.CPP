#include<iostream.h>
#include<conio.h>
class A
{
  public:
	 void set()
	 {
	   cout<<"Set fun of A Class"<<endl;
	 }
};

class B:public A
{
  public:
	 void set()
	 {
	   cout<<"Set fun of B class";
	 }
};
 void main()
 {
   clrscr();
   B b;
   b.set();
   getch();
 }

