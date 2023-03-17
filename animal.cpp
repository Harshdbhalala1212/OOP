#include<iostream.h>
#include<conio.h>
class Parrot
{
     public:
     	   virtual void eat()
     	   {
     	   	  cout<<"It is eat nuts";
     	   } 
};

class Dog
{
     public:
     		virtual void eat()
     		{
     			cout<<"it is drink milk";
     		}
};
class Animal:public parrot, public Dog
{

}

void main()
{
	clrscr();
	Parrot *p;
	Animal a;
	p=&a;
	p->eat();

	Dog *d;
	d=&a;
	d->eat();
	getch();
}