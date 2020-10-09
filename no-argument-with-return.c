/* function with no arguments and with return value */
#include<stdio.h>
#include<conio.h>
int add (void); // function prototype
int main(int argc, char const *argv[])
{
    int ans;
    ans = add (); // function called
    printf("\n Addition: %d\n" , ans);
    
}


// function declaration
int add (void)
{
    int a, b, c;
    printf("\n Enter two Numbers: ");
    scanf ("%d %d " , &a , &b);
    c = a+b;
    return(c);
}