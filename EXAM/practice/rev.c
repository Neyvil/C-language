#include <stdio.h>

int reverse(int num, int rev_num){
    if(num == 0){
        return rev_num;
    }
    rev_num = rev_num * 10 + (num % 10);
    return reverse(num/10, rev_num);
}

int main(){
    int num, rev_num = 0;
    printf("Enter a number to reverse: ");
    scanf("%d", &num);
    printf("The reversed number is: %d\n", reverse(num, rev_num));
    return 0;
}
