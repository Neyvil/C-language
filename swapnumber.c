#include <stdio.h>

int main(){
    double first, second,third;
    printf("enter no");
    scanf("%lf",&first);
    printf("enter 2nd no");
    scanf("%lf",&second);
    third = first;
    first=second;
    second=third;
    printf("\nthe first no after swapping =%.2lf",first);
    printf("\nthe second no after swapping =%.2lf",second);
}
