#include<stdio.h>
int main()
{
    int r;
    printf("ENTER RADIUS :- ");
    scanf("%d",&r);
    printf("ENTER HIEGHT :- ");
    int h;
    scanf("%d",&h);
    double c;
    c=22.7*r*r*h;
    printf("volume is = %8lf",c);
    return 0;

}