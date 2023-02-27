#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char lines[100];
    int end=0,
        words=0,
        line=0,
        character=0;
    int i;
    char c;
    printf("Write your \"IMAGINATION\" \n");
    scanf("%[^~]",&lines);
    for(i=0;lines[i]!='\0';i++){
        if(lines[i]==' ')
        {
          words++;
          
        }
        else if(lines[i]=='\n'){
            line++;
            words++;
        }
        else if(lines[i]!=' ' && lines[i]!='\n' ){
            character++;
        }

    }
    if(character>0){
        words++;
        line++;
    }
    printf("The no of words:- %d",words);
    printf("\nThe  no of lines:- %d",line);
    printf("\nThe no of characters:- %d",character);
  
return 0;
}