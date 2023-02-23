#include<stdio.h>
#include<stdlib.h>
int main(){
   int a[10];
   int i,j,ele,num;
   printf("Enter number of item : ");
   scanf("%d",&num);
   printf("Enter the elements:- \n");
   for(i=0;i<num;i++){
    scanf("%d",&a[i]);
   }
   printf("ENTERED ELEMENT ARE:-\n");
   for(i=0;i<num;i++){
    printf("%d\n",a[i]);
   }
   printf("ORDERD ELEMETS:-\n");
   for(i=0;i<num-1;i++)
   {
    for(j=0;j<=num-1;j++){
        if(a[j]>a[j+1]){
            ele=a[j];
            a[j]=a[j+1];
            a[j+1]=ele;

        }
    }
    
   }
   for(i=0;i<num;i++){
    printf("%d\t",a[i]);
   }
return 0;
}