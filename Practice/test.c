#include<stdio.h>
#include<stdlib.h>
void main(){
    char month[12][20]={"january","february","march","april","may","june","july","august","september","october","November","December"};
    int i;

    printf("Enter the month value :  ");
    scanf("%d",&i);

    if (i<1 || i>12){
        printf("incorrect value entered !! ");
        exit(0);
        
    }
    if (i!=12)
    printf("%s followed by %s",month[i-1],month[i]);
    else
    
        printf("%s followed by %s",month[i-1],month[0]);
    

    
    
}