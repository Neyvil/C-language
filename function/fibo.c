#include<stdio.h>
#include<stdlib.h>
int fibonacci(int n){
    if(n<2)
        return n;
    
    else
        return fibonacci(n-1)+fibonacci(n-2);
}
int main(){
    int n,i;
    printf("Enter no of term :-");
    scanf("%d",&n);
    for (i=0; i<n; i++){
        printf("%d, ",fibonacci(i));

    }
    

return 0;
}