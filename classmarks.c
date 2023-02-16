#include <stdio.h>
int main(){
    int n, m,i,j,roll_number,marks;
    printf("ENTER THE NUMBER OF SUBJECT & STUDENT : \n");
    scanf("%d \n%d",&m,&n);
    printf("\n");
    for (i=1;i<=n;i++){
        printf("ENTER THE ROLL NO : ");
        scanf("%d",&roll_number);
        int sum =0;
        printf("Enter %d subject Number :- \n ",m);
        for (j = 1; j <=m; j++)
        {
            scanf("%d",&marks);
            sum = sum+marks;

        }
        if (sum>200){
            printf("YOU HAVE DONE WELL!!\n");
        }
        else
           printf("BETTER LUCK NEXT TIME!!\n");
        
    }
    return 0;
}