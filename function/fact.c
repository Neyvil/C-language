#include<stdio.h>
#include<stdlib.h>
int fact(int n){
    if(n==0)
        return 1;
    else
        return n*fact(n-1);
}
int main(){
    int n;
    printf("Enter the factorial no:- ");
    scanf("%d",&n);
    if(n==0)
        printf("0");
    else
        printf("%d",fact(n));

return 0;
}