#include<iostream.h>
#include<conio.h>
#include<string.h>
class student
{
	int id;
	char name[20];
	public:
		   void set()
		   {
		   	 cout<<"enter id and name:";
		   	 cin>>id>>name;
		   }
		   void get()
		   {
		   	cout<<"id="<<id<<endl;
		   	cout<<"name="<<name<<endl;
		   }
};

void main()
{
  clrscr();
  student *s1,*s2;
  s1=new student;
  s1->set();
  s1->get();
  getch();
}