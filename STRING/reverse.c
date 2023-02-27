#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
  char str[20];
  
  printf("enter a string:-  ");
  gets(str);
  printf("The Entered String Before reverse :-");
 puts(str);
  //manually
  int i,n ,temp;
  n=strlen(str);
  for(i=0;i<n/2;i++){
     temp=str[i];
     str[i]=str[n-i-1];
     str[n-i-1]=temp;
  }
  printf("The reverse string manually :- ");
  puts(str);
  //With function
  strrev(str);
  printf("Entered String again reverse to :- ");
  puts(str);
return 0;
}