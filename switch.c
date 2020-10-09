// THE EXAMPLE OF SWITCH FUNCTION
#include<stdio.h>
int main()
{
    int age , marks;
    printf("Enter your age:\n ");
    scanf("%d" , &age);

    printf("Enter your marks:\n");
    scanf("%d" , &marks);

    switch (age)
    {
        case 3:
        printf("your age is 3\n");
        switch (marks)
        {
        case 45:
            printf ("You are passed !!\n");
            break;
        
        default:
            printf("YOu are failed!!\n");
        }
        break;

        case 13:
        printf("your age is 13\n");
        break;

        case 23:
        printf("your age is 23\n");
        break;
    
    default:
        printf("your age is not 3,13,23.");
        break;
    }
    return 0;
}
