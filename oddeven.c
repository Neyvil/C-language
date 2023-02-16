#include <stdio.h>
int main()
{
    // int num;
    // printf("enter number :- ");
    // scanf("%d",&num);
    // if (num%2 == 0)
    // {
    //     printf("%d is even number",num);
    // }
    // else{
    //     printf("%d is odd number",num);
    // }
    // return 0;

    //if else ladder

    
    int number1,number2;
    printf("ENTER TWO NUMBER = ");
    scanf("%d %d",&number1,&number2);
    if (number1 == number2)
    {
        printf("%d = %d",number1,number2);
    }
    else if (number1 > number2)
    {
        printf("%d > %d",number1,number2);
    }
    else
    {
        printf("%d < %d",number1,number2);
    }
    return 0;
    
    
    
}