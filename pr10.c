#include<stdio.h>

int main()
{
//  printf("hello world \n");
// int age;

// printf("Enter your age :\n");

// scanf("%d", &age);

// printf("You entered %d as your age.\n", age);

// if (age>=18)
// {
//     printf("You can vote!");
// }
// else
// {
//     printf("You cannot vote!");
// }

int subject;

printf("In which subject you have passed :\n 1. Maths \n2. Science \n3. Both \n4. Fail in both ? \n");

scanf("%d" , &subject);


if (subject==1)
{   
    printf("Congratulation's you have won 15rs"); 
}

else if (subject==2)
{
    printf("Congratulation's you have won 15rs");

}

else if (subject==3)
{
    printf("Congratulation's you have won 45rs");

}

else if (subject==4)
{
    printf("Sorry you don't won a reward, Better luck next time");
}

else if (subject>4)
{
    printf("You entered a invalid number, Please enter a valid number");
}









    return 0;
}
