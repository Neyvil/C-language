// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     int dno;
//     printf("Enter Days Number from (1 to 7) = ");
//     scanf("%c",&dno);
//     switch (dno)
//     {
//     case 1:
//         printf("Monday");
//         break;
//     case 2:
//         printf("Tuesday");
//         break;
//     case 3:
//         printf("Wednesday");
//         break;        
//     case 4:
//         printf("Thursday");
//         break;
//     case 5:
//         printf("Friday");
//         break;
//     case 6:
//         printf("Saturday");
//         break;    
//     default:
//         printf("Sunday");
//         break;
//     }
//     return 0;
// }
#include <stdio.h>
int main()
{
   int num ,i,s;
   scanf("%d",&num);
   for(i=0;i<=num;i++){
    s=s+i;
    
   }
printf("sum of %d natural no =%d",num,s);

}