#include<stdio.h>
#include<stdlib.h>
int main(){
  typedef struct area{
    float x, y;
    float area;
    float midx;
    float midy;
  }ar;
  ar p1,p2,p3,m1,m2,a1;
  //Line segment
  printf("ENTER 1stx,y = ");
  scanf("%f %f",&p1.x,&p1.y);
  printf("ENTER 2ndx,y = ");
  scanf("%f %f",&p2.x,&p2.y);
  printf("ENTER 3rdx,y = ");
  scanf("%f %f",&p3.x,&p3.y);
  //middle point
  m1.midx=(p1.x+p2.x)/2;
  m2.midy=(p1.y+p2.y)/2;
  printf("The midpoint of l1 & l2 is(%.1f , %.1f)",m1.midx,m2.midy);
  //area of triangle
  a1.area=(p1.x*(p2.y -p3.y)+p2.x*(p3.y -p1.y)+p3.x*(p1.y-p2.y))/2   ;
  if(a1.area<0){
    a1.area=-1*a1.area;
  }

  printf("\nAREA OF TRIANGLE : %f",a1.area);




return 0;
}