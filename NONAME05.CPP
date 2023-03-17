#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int l,h,r,area,choice;
 printf("1.Rectangle area\n2.Triangle area\n3.Circle area\n");
 scanf("%d",&choice);
 switch(choice)
 {
   case 1:
	  printf("Enter l & h value:");
	  scanf("%d %d",&l,&h);
	  area=l*h;
	  printf("Rectangle area=%d",area);
	  break;
   case 2:
	  printf("Enter l & h value:");
	  scanf("%d %d",&l,&h);
	  area=(l*h)/2;
	  printf("Triangle area=%d",area);
	  break;
   case 3:
	  printf("Enter r value:");
	  scanf("%d",&r);
	  area=3.14*r*r;
	  printf("Circle area=%d",area);
	  break;
   default:
	  printf("Invalid choice");
 }
 getch();
}