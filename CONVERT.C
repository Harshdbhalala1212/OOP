#include<stdio.h>
#include<conio.h>
void main()
{
float value;
int r,p;
clrscr();
printf("Enter your value:");
scanf("%.2f",&value);
r=value;
p=(value-r)*100;
printf("rupees = %d\npaisa = %d",r,p);
getch();
}