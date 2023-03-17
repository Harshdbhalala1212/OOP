#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 long int unit,price,amount,tax,pay;
 printf("Enter your unit:");
 scanf("%ld",&unit);
 if(unit>0)
 {
   if(unit>=100)
   {
      if(unit>=500)
      {
	 if(unit>=1000)
	 {
	    price=8;
	 }
	 else
	 {
	    price=7;
	 }
      }
      else
      {
	price=6;
      }
   }
   else
   {
      price=5;
   }
 }
 printf("Price=%ld\n",price);
 amount=price*unit;
 printf("Amount=%ld\n",amount);
 tax=(amount*20)/100;
 printf("Tax=%ld\n",tax);
 pay=tax+amount;
 printf("pay=%ld\n",pay);
 getch();
}














