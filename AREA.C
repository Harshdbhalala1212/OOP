#include<stdio.h>
#include<conio.h>
void circle(int);
void rectangle(int,int);
void main()
{
 clrscr();
 int choice,r;
 char ch;
 do
 {
   printf("1. for circle\n2. for reactangle\n");
   scanf("%i",&choice);
   switch(choice)
   {
      case 1:
	     printf("Enter radius:");
	     scanf("%i",&r);
	     circle(r);
	     break;
      case 2:
	     printf("Enter h & l:");
	     scanf("%i %i",&l,&h);
	     rectangle(l,h);
	     break;
      default:
	     printf("Invalid choice");
   }

   printf("Check another area then press y");
   fflush(stdin);
   scanf("%c",&ch);
 }while(ch=='y');
 getch();
}

void circle(int r)
{
  int area;
  area=3.14*r*r;
  printf("Circle area=%i\n",area);
}
void rectangle(int l,int h)
{
  int area;
  area=l*h;
  printf("Rectangle area=%i",area);
}