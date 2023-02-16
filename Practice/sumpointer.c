#include<stdio.h>
int main ()    
{
   int *p,*q,x,y;
   printf("Enter the two number :-");
   scanf("%d \n %d",&x,&y);
   p=&x;
   q=&y;
   printf("%d",*p+*q);
   return 0;

}