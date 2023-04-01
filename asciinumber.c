#include <stdio.h>
#include <string.h>
int main(){
   char s[40];
   printf("Enter a string: ");
   scanf("%s",&s);
   for(int i=0; i<strlen(s); i++){
      if(s[i]==97||s[i]==101||s[i]==105||s[i]==111||s[i]==117||s[i]==65||s[i]==69||s[i]==73||s[i]==79||s[i]==85){
      
        if(i%2==0){
            s[i]='@';
        }
        else{
            s[i]='#';
        }
      }
   }
   printf("%s\n",s);

   return 0;
}