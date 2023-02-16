#include <stdio.h>
int main(){
    int x,y;
    printf("Enter the two number :- ");
    scanf("%d \n %d",&x,&y);

    int *a,*b;
    a=&x;
    b=&y;
    if (*a>*b){
        printf("%d is the max number",*a);
    }
    else{
        printf("%d is the max number",*b);
    }
    return 0;
}