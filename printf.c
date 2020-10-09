/* PRINTF(functions) */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //int
    int a=2,b=23,c=234,d=2345,e=23456,f=234567;
    printf("right justified the text\n\n");
    printf("%6d\n",a);
    printf("%6d\n",b);
    printf("%6d\n",c);
    printf("%6d\n",d);
    printf("%6d\n",e);
    printf("%5d\n\n\n\n",f);

    printf("left justified the text\n\n");
    printf("%-5d\n",a);
    printf("%-5d\n",b);
    printf("%-5d\n",c);
    printf("%-5d\n",d);
    printf("%-5d\n",e);
    printf("%-5d\n",f);

}
