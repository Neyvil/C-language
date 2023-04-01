#include<stdio.h>
#include<stdlib.h>
int main(){
   int i,j,k=1,num;
   printf("Enter the no of rows to process:-");
   scanf("%d",&num);
   for(i=1;i<num;i++){
    for(j=1;j<=i;j++){
        printf("%d ",k++);
    }
    
    printf("\n");
   }

return 0;
}