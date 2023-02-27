#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
 char str[40];
 
 printf("Enter a string :-" );
 gets(str);
 int flag=0,n,i;
 n=strlen(str);
 for(i=0;i<n;i++){
    if(str[i]!=str[n-i-1])
    {    flag=1;
         break;
    }    
 }
 if(flag){
    printf("%s is not PALINDROME",str);
 }
 else{
    printf("%s is palindrome",str);
 }
   


 return 0;
}