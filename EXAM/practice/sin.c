#include<stdio.h>
#include<math.h>

float degreesToRadians(float x){
    float temp=(22.0*x)/(180*7.0);
    return temp;}
int factorial(int n){
    if(n==0 || n==1)
      return 1;
    else{
       return n*factorial(n-1);
    }
}
int main(){
   printf("ENTER DEGREE: ");
   float x;
   double y=0.0;
   scanf("%f",&x);
   float deg=degreesToRadians(x);
   for(int i=0;i<5;i++){
    
      y=y+(pow(-1,i)*pow(deg,2*i+1))/factorial(2*i+1  );
   }
   printf("sin(%f)= %lf",x,y);
   return 0;
}