#include <stdio.h>
int main()
{
    int a,b,c;
    printf("enter three number:-");
    scanf("%d\n %d\n %d",&a,&b,&c);
    if(a < b && c < b){
        printf("%d is the greatest number",b);
    }
    else if (b<a && c<a)
    {
        printf("%d is the greatest number",a);
    }
    else{
        printf("%d is the greatest number",c);
    }
    return 0;
    
}