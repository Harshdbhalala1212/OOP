#include<iostream.h>
#include<conio.h>
#include<string.h>
class Student
{
  int fees;
  char course[20];
  public:
	 void input_data()
	 {
	   cout<<"Enter fees & Course:"<<endl;
	   cin>>fees>>course;
	 }
	 void data_show()
	 {
	   cout<<"Course="<<course<<endl;
	   cout<<"Fees="<<fees<<endl;
	 }
};
void main()
{
  clrscr();
  Student s,s1;
  s.input_data();
  s.data_show();
  getch();
}


