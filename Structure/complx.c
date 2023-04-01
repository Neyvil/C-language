#include<stdio.h>
#include<stdlib.h>
typedef struct complex{
    double real;
    double img;
}CN;
CN add(CN c1,CN c2){
    CN c3;
    c3.real=c1.real+c2.real;
    c3.img=c1.img+c2.img;
    return c3;
}
CN product(CN c1, CN c2){
    CN c3;
    c3.real=c1.real*c2.real-c1.img*c2.img;
    c3.img=c1.real*c2.img+c1.img*c2.real;
    return c3;
}

int main(){
   CN c1,c2,c3,c4;
   printf("Enter the real part of c1 & c2:-\n");
   scanf("%lf \n%lf",&c1.real,&c2.real);
   printf("Enter the imaginary part of c1 & c2:-\n");
   scanf("%lf \n%lf",&c1.img,&c2.img);
   c3=product(c1,c2);
   printf("The product of c1 & c2:%lf\n",c3);
   c4=add(c1,c2);
   printf("The sum of c1 and c2 :- %lf",c4);


return 0;
}