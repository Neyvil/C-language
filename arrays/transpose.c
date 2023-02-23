#include<stdio.h>
#include<stdlib.h>
int main(){
   int i,j,k;//loops
   int a[10][10],b[10][10],c,r;
   printf("ENTER THE NUMBER ROWS=");
   scanf("%d",&r);
   printf("ENTER THE NUMBER  COLUMNS=");
   scanf("%d",&c);
   printf("enter matrix elment :");
   for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        scanf("%d",&a[i][j]);
    }
   }
   for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        printf("\n %d \t",a[i][j]);
    }
    printf("\n");
   }
   printf("\nTranspose of matrix:-\n");
   for(i=0;i<r;i++){
    for(j=0;j<c;j++){
      b[i][j]=a[j][i];   
    }
   }
   for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        printf("%d \t",b[i][j]);
    }
    printf("\n");
   }

return 0;
}