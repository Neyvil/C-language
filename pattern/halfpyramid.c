#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,j,rows;
    printf("Enter a number to define the rows =");
    scanf("%d",&rows);
    for (i=1;i<=rows;i++){
        for(j=rows;j>=i;j--){
            printf("*");
        }
        printf("\n");
        
    }
    for (i=1;i<=rows;i++){
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }

return 0;
}