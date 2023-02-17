#include <stdio.h>
// int main(){
//     int i;
//     for(i=1; i<11; ++i){
//         printf("%d \t",i);
//     }
//     return 0;
// } 
int main()
{
 int i,j,c;
 
 for(i=1;i<=20;i++){
    
    for (j=1;j<=12;j++){
        c=i*j;
        printf("%2d",c);
    }
    printf("\n");
 }
 return 0;
}