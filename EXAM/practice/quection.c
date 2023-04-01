#include<stdio.h>
#include<stdlib.h>
int main(){
    //taking units
    double unit,charge=75,sum;
    printf("ENTER UNITS:- ");
    scanf("%lf",&unit);
    if(unit<=150){
        charge+=unit;
    }
    else if(unit > 150 && unit <=250){
        charge+=((unit-150)*2)+150;
    }
    else if(unit>=251 && unit<=500){
        charge+=((unit-250)*3)+350;
    }
    else{
        printf("unit is out of range");
    }
    if(charge>300){
        sum=charge*0.125;
        charge+=sum;
    }
    printf("customer consumed unit is %.2lf \n total charge is %.2lf",unit,charge); 



return 0;
}