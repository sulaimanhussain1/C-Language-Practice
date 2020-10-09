/* Difference between puts and printf function*/
// its create a new line automatically
// puts only use to strings

#include <stdio.h>
#include <stdlib.h>

int main()
{
   char name [50];
   printf ("Enter your name: ");
   scanf("%s" , &name);
   printf("Your name is %s \n \n ", name);
   printf("**This is puts function**\n \n");
   getch();
   puts ("\Enter your name: ");
   scanf("%s" , &name);
   puts("Your name is");
   puts(name);
   getch();

}
