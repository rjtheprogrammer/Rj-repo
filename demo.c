#include<stdio.h>

int main()
{
    int num;

    printf("Enter the number you got in maths\n");
    scanf("%d", &num);

    if (num<=30)
    {
        printf("Your progress is very low\n"); 
    }
    else if (num<=75)
    {
        printf("Your progress is good, Improve more \n ");

    }
   else if (num>75)
   {
    printf(" Excellent, Keep it up");
   }
   
    
    
    
    return 0;
}
