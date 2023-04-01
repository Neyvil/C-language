#include<stdio.h>
#include<stdlib.h>
int main(){
   for(int i = 0; i < 6;i++){
    for(int j=6;j>i;j--){
            printf(" ");
        }
    for(int k=1;k<=i;k++){
        printf("%d",k);
    }
    for(int l=1;l<=i-1;l++){
        printf("%d",l);
    }
    printf("\n");

   }


return 0;
}