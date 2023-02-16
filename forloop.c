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
    int num , sum=0 ,i;
    printf("Enter positive number:- ");
    scanf("%d",&num);
    for (  i = 0; i <= num ; ++i)
    {
        sum=sum+i;
    }
    printf("The sum of first %d whole number=%d",num,sum);
    return 0;
}