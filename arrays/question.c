#include <stdio.h>

int main() {
   int m, n, i, j;
   int matrix[10][10];
   int diagonalSum = 0, firstRowSum = 0, difference;

   printf("Enter the order of the matrix (m x n): ");
   scanf("%d %d", &m, &n);

   printf("Enter the matrix elements:\n");
   for (i = 0; i < m; i++) {
      for (j = 0; j < n; j++) {
         scanf("%d", &matrix[i][j]);
      }
   }

   // Calculate the sum of the elements on the main diagonal
   for (i = 0; i < m; i++) {
      for (j = 0; j < n; j++) {
         if (i == j) {
            diagonalSum += matrix[i][j];
         }
      }
   }

   // Calculate the sum of the elements on the first row
   for (j = 0; j < n; j++) {
      firstRowSum += matrix[0][j];
   }

   // Calculate the difference between the two sums
   difference = diagonalSum - firstRowSum;

   printf("Difference between sum of elements on main diagonal and first row: %d\n", difference);

   return 0;
}
