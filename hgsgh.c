#include<stdio.h>
int main(){
    int subject;
    printf("Which subject did you passed\n"
           "1.Maths & Science\n"
           "2.Science\n"
           "3.Maths\n");
    scanf("%d", &subject);
    if (subject==1)
    {
        printf("CONGRATS! Your prize is 45");
    }
    else if (subject==2)
    {
        printf("CONGRATS! Your prize is 15");
    }
    else if (subject==3)
    {
        printf("CONGRATS! Your prize is 15");
    }
    
     return 0;
  }
