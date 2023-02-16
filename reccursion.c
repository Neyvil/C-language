#include <stdio.h>  
int fact (int);  
int main()  
{  
    int n,f;  
    printf("Enter the number whose factorial you want to calculate? \n");  
    scanf("%d",&n);  
    f = fact(n);  
    printf("factorial = %d",f);  
}  
int fact(int n)  
{ 
    int cal; 
    if (n==0)  
    {  
        return 0;  
    }  
    else if ( n == 1)  
    {  
        return 1;  
    }  
    else   
    {  
        cal=n*fact(n-1);
        return cal;
    }  
}  