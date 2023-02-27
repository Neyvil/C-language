#include<stdio.h>
#include<stdlib.h>
int main(){
   int i,n;
   printf("Enter the no of elements: ");
   scanf("%d",&n);
   int arr[n];
   printf("Enter the %d array elements:-\n",n);
   for(i=0;i<n;i++){
      scanf("%d",&arr[i]);
   }
   printf("Array elements before =\n");
   for(i=0;i<n;i++){
      printf("%d\n",arr[i]);
   }
   //reverse
   for(i=0;i<n/2;i++){
      int temp=arr[n-i-1];
      arr[n-i-1]=arr[i];
      arr[i]=temp;

   }
   printf("Array after reverse :- ");
   for(i=0;i<n;i++){
      printf("%d ",arr[i]);
   }
   
   return 0;
}