#include<stdio.h>
#include<conio.h>
#include<string.h>
struct student
{
  int fees;
  char name[20];
};
void main()
{
  clrscr();
  struct student s1,s2;
  //s1.fees=10000;
  //s2.fees=20000;
  //strcpy(s1.name,"vijay");
  //strcpy(s2.name,"Rohan");
   printf("Enter first student name & fees:");
   scanf("%s%d",&s1.name,&s1.fees);

   printf("Enter second student name & fees:");
   scanf("%s%d",&s2.name,&s2.fees);

  printf("fees=%d\nName=%s\n\n",s1.fees,s1.name);
  printf("fees=%d\nName=%s\n",s2.fees,s2.name);

  if(s1.fees<1300)
  {
    printf("%s\n\n",s1.name);
  }

  if(s2.fees<1300)
  {
    printf("%s\n\n",s2.name);
  }
  getch();
}

/*
Book
 id
 price
 name

 5 user data insert
 */
