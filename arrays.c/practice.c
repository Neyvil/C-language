#include<stdio.h>
#include<stdlib.h>
int main(){
  int i,j,k;//loops
  int a[10][10],b[10][10],mul[10][10],c,r;
  printf("Enter rows =");
  scanf("%d",&r);
  printf("enter column=");    
  scanf("%d",&c);
  printf("Enter 1st matrix element-: \n");
  for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        scanf("%d",&a[i][j]);
    }
  }
  printf("Enter 2nd matrix elements:- \n");
   for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        scanf("%d",&b[i][j]);
    }

  }
  printf("\nMULTIPLICATION OF MATRIX\n");
   for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        mul[i][j]=0;
        for(k=0;k<c;k++){
            mul[i][j]=mul[i][j]+a[i][k]*b[k][j];
        }

    }
  }
   for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        printf("%d\t",mul[i][j]);
    }
    printf("\n");
  }




return 0;
}