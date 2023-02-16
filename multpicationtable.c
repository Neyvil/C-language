#include <stdio.h>
int main(){
    int COLMAX =10;
    int ROWMAX= 10;
    int row,column,y;
    row= 1;
    printf("      MULTIPLICATION TABLE     \n");
    printf("-------------------------------\n");
    do
    {
        column=1;
    
        do
        {
           y = row * column;
           printf("%3d ",y);
           column = column +1;   
        } while (column <=  COLMAX);
          printf("\n");
          row = row + 1;

        
    } while (row<=ROWMAX);
    printf("---------------------------------\n");
    
}