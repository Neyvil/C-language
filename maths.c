#include <stdio.h>
int main()
{
    // float a, b;
    // printf("enter no =");
    // scanf("%f",&a);
    // printf("enter no ");
    // scanf("%f",&b);
    // printf("divison of two number = %.3f",a/b);
    // return 9;


    //finding quotinent and remainder
    int n1,n2,n3,n4;
    printf("Enter first number = ");
    scanf("%d",&n1);
    printf("Enter second number = ");
    scanf("%d",&n2);
    
    n3=n1/n2;
    n4= n1 % n2;
    printf("the quotient =%d\n",n3);
    printf("the remainder = %d",n4);
    return 0;
    


 }