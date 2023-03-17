#include<stdio.h>
#include<conio.h>
void main()
{
  clrscr();
  char ch;
  printf("Enter any character to check vowels or consonents:");
  scanf("%c",&ch);
  switch(ch)
  {
    default:
	    printf("consonent");
	    break;
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
	     printf("Vowel");
	     break;

  }
  getch();
}