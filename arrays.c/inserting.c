#include<stdio.h>
#include<stdlib.h>
int main(){
  int i,num,pos,n;
  printf("ENTER NUMBER OF ELEMENT:-");
  scanf("%d",&n);
  int arr[n];
  printf("ENTER ARRAY ELEMENTS:-");
  for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
  ++n;
  printf("ENTER ELEMENT TO INSERT:-");
  scanf("%d",&num);
  printf("ENTER POSITION :-");
  scanf("%d",&pos);
  pos=pos-1;
  for(i=n;i>pos;i--){
    arr[i+1]=arr[i];
  }
  arr[pos]=num;
  for(i=0;i<n;i++){
    printf("%d\t",arr[i]);
  }



return 0;
}