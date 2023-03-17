#include<stdio.h>
#include<conio.h>
//f = (c*1.8) +32;
// ans = (a*a) + (2*a*b)+(b*b)
/*
*/
void main()
{
 clrscr();
 int a,b,ans;
 printf("Enter a & b values:");
 scanf("%i %i",&a,&b);
 ans =(a*a)+(2*a*b)+(b*b);

 printf("a=%i\nb=%i\n",a,b);
 printf("ans = %i",ans);


 getch();

}

