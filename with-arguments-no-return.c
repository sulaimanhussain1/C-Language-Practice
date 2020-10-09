/* function with arguments and with no return value */
#include<stdio.h>
#include<conio.h>
void add (int , int);        // function prototype
int main(int argc, char const *argv[])
{
    int a ,b,c;
    printf("\n Enter two numbers: ");
    scanf("%d %d" , &a , &b);
    add (a,b);              // function called
    printf("GOOD JOB!");
}

/* function declaration */
void add (int n, int m)
{
    int s;
    s = n+m;
    printf ("\n Addition: %d\n" , s);
}
