//using recursion 
#include <stdio.h>
void swap(int a,int b){
    // int temp=a;
    // a=b;
    // b=temp;
    // printf("\nafter swaping the number %d and %d",a,b);
    if (a!=b){
        printf("after swapingx %d and %d  ",b,a);
    }
    
    

}
int main(){
    int a=10;
    int b=122;
    printf("\nThe number before swap %d and %d ",a,b);
    swap(a,b);
}