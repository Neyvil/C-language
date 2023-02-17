#include<stdio.h>
#include<stdlib.h>
int main(){
  int i,j,k,rows;
  printf("enter the number of rows:\n");
  scanf("%d",&rows);

  for (i=1;i<rows;i++){
    for ( j=1; j <= i; j++){
        printf(" ");

    }
    
    for ( k =i; k<=rows ; k++)
    {
        printf("*");
    }
    printf("\n");
    
   
  }


return 0;
}