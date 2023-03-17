#include<iostream.h>
#include<conio.h>
class Animal
{
  char type[20];
  protected:
	    void setAnimal()
	    {
	      cout<<"Enter Animal Type:"<<endl;
	      cin>>type;
	    }
	    void getAnimal()
	    {
	      cout<<"Animal Type="<<type<<endl;
	    }
};
class Dog:public Animal
{
  int age;
  char breed[20];
  public:
	 void setDog()
	 {
	   setAnimal();
	   cout<<"Enter dog breed and age:"<<endl;
	   cin>>breed>>age;
	 }
	 void getDog()
	 {
	   getAnimal();
	   cout<<"Breed name="<<breed<<endl;
	   cout<<"Dog Age="<<age<<endl;
	 }
};
void main()
{
 clrscr();
 Dog d;
 d.setDog();
 d.getDog();
 getch();
}