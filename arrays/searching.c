#include<stdio.h>
#include<stdlib.h>
int main(){
   int i,count,j,k,num,y;
   printf("ENTER SEARCHING ELEMENT :-");
   scanf("%d",&num);
   int a[10]={2,3,4,5,3,0,100,56,67,69};
   int x=sizeof(a);
   
   for(i=0;i<x;i++){

    if (a[i]==num){
        count=1;
        y=i;
        
    }
   }
   if (count==1){
    printf("\nEntered elrment is present in %d position",y);
   }


return 0;
}