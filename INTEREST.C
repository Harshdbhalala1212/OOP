#include<stdio.h>
#include<conio.h>
void main()
{

 long int i,p,r,n,total;
 clrscr();
 printf("Principal amount:-");
 scanf("%ld",&p);
 printf("\nRate of interest:-");
 scanf("%ld",&r);
 printf("\nHow many years:-");
 scanf("%ld",&n);
 i = (p * r *n)/100;
 printf("Total Interest:-%ld\n",i);

 total = p + i;
 printf("Total Amount:-%ld",total);
 getch();
}