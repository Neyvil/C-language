#include <stdio.h>
#include <stdlib.h>
int factorial(int n)
{
   int fac;
   if (n == 0 || n == 1)
   {
      return 1;
   }
   else
   {
      fac = n * factorial(n - 1);
      return fac;
   }
}
int main()
{
   int n;
   printf("Enter the number of column:");
   scanf("%d", &n);
   for (int i = 0; i < n; i++)
   {
      for (int j = n; j >= i; j--)
      {
         printf(" ");
      }

      for (int k = 0; k <= i; k++)
      {
         printf("%d ", factorial(i) / ((factorial(k)) * factorial(i - k)));
      }
      printf("\n");
   }

   return 0;
}