//Multiplication table of any number ..
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num;
    printf("Enter any num.You want to a multiplication table.\n");
    scanf("%d" , &num);

    printf("*********************************************************\n");
    printf("Multiplication Table of %d.\n", num);
    printf("**********************************************************\n\n");
    for (int i = 1; i < 11; i++)
    {
        printf("%d X %d = %d\n" , num,i,num*i);
    }
    
    return 0;
}
