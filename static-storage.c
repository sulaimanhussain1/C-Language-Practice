#include<stdio.h>
#include <conio.h>
void num (void);
int main(int argc, char const *argv[])
{
    num();
    num();
    num();
    num();
}
void num (void)
{
    static int a=1;       // include static for increase the value of a.
    printf("%d\n" , a);
    a++;
}
