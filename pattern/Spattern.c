#include<stdio.h>
#include<stdlib.h>
int main(){
    char a='S';
    char b='O';
    int i,j,k,l;
    for(i=1;i<=4;i++){
         if(i==2||i==3){
                for ( k=1;k<=4;k++)
                {
                    if (k==2 || k==3){
                        printf("%4c",b);
                    }
                    else{
                        printf("%4c",a);
                    }
                }
                
            }
        
        
        
        else{
            for(j=1;j<5;j++){
           printf("%4c",a);
        }
        }
        
        printf("\n");
    }


return 0;
}