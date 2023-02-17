#include<stdio.h>
#include<stdlib.h>
int main(){
  int i,j,k,rows;
  printf("Enter rows to show: ");
  scanf("%d",&rows);
  printf("\n");
  for(i=1;i<=rows;i++){
    for(j=i;j<=rows;j++)
    {
        printf(" ");
    }
    for (k=1;k<=2*i-1;k++){
        printf("*");
    }
    printf("\n");

  }


return 0;
}