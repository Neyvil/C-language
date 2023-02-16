// Program to display a number if it is negative

#include <stdio.h>
int main() {
    // int number;

    // printf("Enter an integer: ");
    // scanf("%d", &number);

    // // true if number is less than 0
    // if (number > 0) {
    //     printf("You entered %d.\n", number);
    // }

    // printf("The if statement is easy.");
    int number1,number2;
    printf("Enter the value of a = ");
    scanf("%d",&number1);
    printf("Enter value of b =");
    scanf("%d",&number2);
    if (number1 % number2 == 0){
        printf("number is divisible %d",number1);
    }

    return 0;
}