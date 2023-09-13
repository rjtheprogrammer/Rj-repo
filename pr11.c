#include<stdio.h>

int main()
{
    int a;

    printf("Enter the value:\n");
    scanf("%d" , &a);


    switch (a)


    {
        case 2:

        printf("The value is 2 \n");
        break;
            
        case 3:

        printf("The value is 3\n");
        break;

        default:
            printf("The value is not recognized");

   
    }


    return 0;
}
