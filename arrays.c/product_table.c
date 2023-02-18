#include<stdio.h>
#include<stdlib.h>
int main(){
    int ROWS= 6;
    int COLUMN=8;
    int row,column,product[ROWS][COLUMN];
    int i,j;
    printf("      MULTIPLICATION TABLE\n");
    printf(" ");
    for (j=1;j<=COLUMN;j++){
        printf("%4d",j);
    }
    printf("\n");
    printf("__________________________________________________________________\n");
    for(i=0;i<ROWS;i++){
        row = i+1;
        printf("%2d |",row);
        for(j=1;j<=COLUMN;j++){
            column=j;
            product[i][j]=row*column;
            printf("%4d",product[i][j]);
        }
        printf("\n");

    }
    

return 0;
}