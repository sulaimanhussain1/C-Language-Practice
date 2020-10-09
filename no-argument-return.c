/* Function with no arguments and no return value */\
#include <stdio.h>
#include <conio.h>
void message (void);                                  // function prototype
int main(int argc, char const *argv[])
{
   printf("\n Main Function\n ");
   message();                                    // function called
   printf("\n After calling function\n ");
}


/* function declaration */
void message (void)
{
   printf("\n I Am Subprogram \n");
}